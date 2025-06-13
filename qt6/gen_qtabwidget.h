#pragma once
#ifndef MIQT_QT6_GEN_QTABWIDGET_H
#define MIQT_QT6_GEN_QTABWIDGET_H

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
class QResizeEvent;
class QShowEvent;
class QSize;
class QStyleOptionTabWidgetFrame;
class QTabBar;
class QTabWidget;
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
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionTabWidgetFrame QStyleOptionTabWidgetFrame;
typedef struct QTabBar QTabBar;
typedef struct QTabWidget QTabWidget;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QTabWidget* QTabWidget_new(QWidget* parent);
QTabWidget* QTabWidget_new2();
void QTabWidget_virtbase(QTabWidget* src, QWidget** outptr_QWidget);
QMetaObject* QTabWidget_metaObject(const QTabWidget* self);
void* QTabWidget_metacast(QTabWidget* self, const char* param1);
struct miqt_string QTabWidget_tr(const char* s);
int QTabWidget_addTab(QTabWidget* self, QWidget* widget, struct miqt_string param2);
int QTabWidget_addTab2(QTabWidget* self, QWidget* widget, QIcon* icon, struct miqt_string label);
int QTabWidget_insertTab(QTabWidget* self, int index, QWidget* widget, struct miqt_string param3);
int QTabWidget_insertTab2(QTabWidget* self, int index, QWidget* widget, QIcon* icon, struct miqt_string label);
void QTabWidget_removeTab(QTabWidget* self, int index);
bool QTabWidget_isTabEnabled(const QTabWidget* self, int index);
void QTabWidget_setTabEnabled(QTabWidget* self, int index, bool enabled);
bool QTabWidget_isTabVisible(const QTabWidget* self, int index);
void QTabWidget_setTabVisible(QTabWidget* self, int index, bool visible);
struct miqt_string QTabWidget_tabText(const QTabWidget* self, int index);
void QTabWidget_setTabText(QTabWidget* self, int index, struct miqt_string text);
QIcon* QTabWidget_tabIcon(const QTabWidget* self, int index);
void QTabWidget_setTabIcon(QTabWidget* self, int index, QIcon* icon);
void QTabWidget_setTabToolTip(QTabWidget* self, int index, struct miqt_string tip);
struct miqt_string QTabWidget_tabToolTip(const QTabWidget* self, int index);
void QTabWidget_setTabWhatsThis(QTabWidget* self, int index, struct miqt_string text);
struct miqt_string QTabWidget_tabWhatsThis(const QTabWidget* self, int index);
int QTabWidget_currentIndex(const QTabWidget* self);
QWidget* QTabWidget_currentWidget(const QTabWidget* self);
QWidget* QTabWidget_widget(const QTabWidget* self, int index);
int QTabWidget_indexOf(const QTabWidget* self, QWidget* widget);
int QTabWidget_count(const QTabWidget* self);
int QTabWidget_tabPosition(const QTabWidget* self);
void QTabWidget_setTabPosition(QTabWidget* self, int position);
bool QTabWidget_tabsClosable(const QTabWidget* self);
void QTabWidget_setTabsClosable(QTabWidget* self, bool closeable);
bool QTabWidget_isMovable(const QTabWidget* self);
void QTabWidget_setMovable(QTabWidget* self, bool movable);
int QTabWidget_tabShape(const QTabWidget* self);
void QTabWidget_setTabShape(QTabWidget* self, int s);
QSize* QTabWidget_sizeHint(const QTabWidget* self);
QSize* QTabWidget_minimumSizeHint(const QTabWidget* self);
int QTabWidget_heightForWidth(const QTabWidget* self, int width);
bool QTabWidget_hasHeightForWidth(const QTabWidget* self);
void QTabWidget_setCornerWidget(QTabWidget* self, QWidget* w);
QWidget* QTabWidget_cornerWidget(const QTabWidget* self);
int QTabWidget_elideMode(const QTabWidget* self);
void QTabWidget_setElideMode(QTabWidget* self, int mode);
QSize* QTabWidget_iconSize(const QTabWidget* self);
void QTabWidget_setIconSize(QTabWidget* self, QSize* size);
bool QTabWidget_usesScrollButtons(const QTabWidget* self);
void QTabWidget_setUsesScrollButtons(QTabWidget* self, bool useButtons);
bool QTabWidget_documentMode(const QTabWidget* self);
void QTabWidget_setDocumentMode(QTabWidget* self, bool set);
bool QTabWidget_tabBarAutoHide(const QTabWidget* self);
void QTabWidget_setTabBarAutoHide(QTabWidget* self, bool enabled);
void QTabWidget_clear(QTabWidget* self);
QTabBar* QTabWidget_tabBar(const QTabWidget* self);
void QTabWidget_setCurrentIndex(QTabWidget* self, int index);
void QTabWidget_setCurrentWidget(QTabWidget* self, QWidget* widget);
void QTabWidget_currentChanged(QTabWidget* self, int index);
void QTabWidget_connect_currentChanged(QTabWidget* self, intptr_t slot);
void QTabWidget_tabCloseRequested(QTabWidget* self, int index);
void QTabWidget_connect_tabCloseRequested(QTabWidget* self, intptr_t slot);
void QTabWidget_tabBarClicked(QTabWidget* self, int index);
void QTabWidget_connect_tabBarClicked(QTabWidget* self, intptr_t slot);
void QTabWidget_tabBarDoubleClicked(QTabWidget* self, int index);
void QTabWidget_connect_tabBarDoubleClicked(QTabWidget* self, intptr_t slot);
void QTabWidget_tabInserted(QTabWidget* self, int index);
void QTabWidget_tabRemoved(QTabWidget* self, int index);
void QTabWidget_showEvent(QTabWidget* self, QShowEvent* param1);
void QTabWidget_resizeEvent(QTabWidget* self, QResizeEvent* param1);
void QTabWidget_keyPressEvent(QTabWidget* self, QKeyEvent* param1);
void QTabWidget_paintEvent(QTabWidget* self, QPaintEvent* param1);
void QTabWidget_changeEvent(QTabWidget* self, QEvent* param1);
bool QTabWidget_event(QTabWidget* self, QEvent* param1);
void QTabWidget_initStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option);
struct miqt_string QTabWidget_tr2(const char* s, const char* c);
struct miqt_string QTabWidget_tr3(const char* s, const char* c, int n);
void QTabWidget_setCornerWidget2(QTabWidget* self, QWidget* w, int corner);
QWidget* QTabWidget_cornerWidgetWithCorner(const QTabWidget* self, int corner);

bool QTabWidget_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QTabWidget_virtualbase_sizeHint(const void* self);
bool QTabWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QTabWidget_virtualbase_minimumSizeHint(const void* self);
bool QTabWidget_override_virtual_heightForWidth(void* self, intptr_t slot);
int QTabWidget_virtualbase_heightForWidth(const void* self, int width);
bool QTabWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QTabWidget_virtualbase_hasHeightForWidth(const void* self);
bool QTabWidget_override_virtual_tabInserted(void* self, intptr_t slot);
void QTabWidget_virtualbase_tabInserted(void* self, int index);
bool QTabWidget_override_virtual_tabRemoved(void* self, intptr_t slot);
void QTabWidget_virtualbase_tabRemoved(void* self, int index);
bool QTabWidget_override_virtual_showEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_showEvent(void* self, QShowEvent* param1);
bool QTabWidget_override_virtual_resizeEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QTabWidget_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QTabWidget_override_virtual_paintEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QTabWidget_override_virtual_changeEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_changeEvent(void* self, QEvent* param1);
bool QTabWidget_override_virtual_event(void* self, intptr_t slot);
bool QTabWidget_virtualbase_event(void* self, QEvent* param1);
bool QTabWidget_override_virtual_initStyleOption(void* self, intptr_t slot);
void QTabWidget_virtualbase_initStyleOption(const void* self, QStyleOptionTabWidgetFrame* option);
bool QTabWidget_override_virtual_devType(void* self, intptr_t slot);
int QTabWidget_virtualbase_devType(const void* self);
bool QTabWidget_override_virtual_setVisible(void* self, intptr_t slot);
void QTabWidget_virtualbase_setVisible(void* self, bool visible);
bool QTabWidget_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QTabWidget_virtualbase_paintEngine(const void* self);
bool QTabWidget_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QTabWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QTabWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QTabWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QTabWidget_override_virtual_wheelEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QTabWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QTabWidget_override_virtual_focusInEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QTabWidget_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QTabWidget_override_virtual_enterEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QTabWidget_override_virtual_leaveEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_leaveEvent(void* self, QEvent* event);
bool QTabWidget_override_virtual_moveEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QTabWidget_override_virtual_closeEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QTabWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QTabWidget_override_virtual_tabletEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QTabWidget_override_virtual_actionEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QTabWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QTabWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QTabWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QTabWidget_override_virtual_dropEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QTabWidget_override_virtual_hideEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QTabWidget_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QTabWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QTabWidget_override_virtual_metric(void* self, intptr_t slot);
int QTabWidget_virtualbase_metric(const void* self, int param1);
bool QTabWidget_override_virtual_initPainter(void* self, intptr_t slot);
void QTabWidget_virtualbase_initPainter(const void* self, QPainter* painter);
bool QTabWidget_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QTabWidget_virtualbase_redirected(const void* self, QPoint* offset);
bool QTabWidget_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QTabWidget_virtualbase_sharedPainter(const void* self);
bool QTabWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QTabWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QTabWidget_virtualbase_inputMethodQuery(const void* self, int param1);
bool QTabWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QTabWidget_virtualbase_focusNextPrevChild(void* self, bool next);
bool QTabWidget_override_virtual_eventFilter(void* self, intptr_t slot);
bool QTabWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QTabWidget_override_virtual_timerEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QTabWidget_override_virtual_childEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_childEvent(void* self, QChildEvent* event);
bool QTabWidget_override_virtual_customEvent(void* self, intptr_t slot);
void QTabWidget_virtualbase_customEvent(void* self, QEvent* event);
bool QTabWidget_override_virtual_connectNotify(void* self, intptr_t slot);
void QTabWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QTabWidget_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QTabWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QTabWidget_protectedbase_setTabBar(bool* _dynamic_cast_ok, void* self, QTabBar* tabBar);
void QTabWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QTabWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QTabWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QTabWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QTabWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QTabWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QTabWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QTabWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QTabWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QTabWidget_delete(QTabWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
