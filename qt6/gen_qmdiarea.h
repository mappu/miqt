#pragma once
#ifndef MIQT_QT6_GEN_QMDIAREA_H
#define MIQT_QT6_GEN_QMDIAREA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractScrollArea;
class QActionEvent;
class QBrush;
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
class QFrame;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMdiArea;
class QMdiSubWindow;
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
class QStyleOptionFrame;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QActionEvent QActionEvent;
typedef struct QBrush QBrush;
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
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMdiArea QMdiArea;
typedef struct QMdiSubWindow QMdiSubWindow;
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
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QMdiArea* QMdiArea_new(QWidget* parent);
QMdiArea* QMdiArea_new2();
void QMdiArea_virtbase(QMdiArea* src, QAbstractScrollArea** outptr_QAbstractScrollArea);
QMetaObject* QMdiArea_metaObject(const QMdiArea* self);
void* QMdiArea_metacast(QMdiArea* self, const char* param1);
struct miqt_string QMdiArea_tr(const char* s);
QSize* QMdiArea_sizeHint(const QMdiArea* self);
QSize* QMdiArea_minimumSizeHint(const QMdiArea* self);
QMdiSubWindow* QMdiArea_currentSubWindow(const QMdiArea* self);
QMdiSubWindow* QMdiArea_activeSubWindow(const QMdiArea* self);
struct miqt_array /* of QMdiSubWindow* */  QMdiArea_subWindowList(const QMdiArea* self);
QMdiSubWindow* QMdiArea_addSubWindow(QMdiArea* self, QWidget* widget);
void QMdiArea_removeSubWindow(QMdiArea* self, QWidget* widget);
QBrush* QMdiArea_background(const QMdiArea* self);
void QMdiArea_setBackground(QMdiArea* self, QBrush* background);
int QMdiArea_activationOrder(const QMdiArea* self);
void QMdiArea_setActivationOrder(QMdiArea* self, int order);
void QMdiArea_setOption(QMdiArea* self, int option);
bool QMdiArea_testOption(const QMdiArea* self, int opton);
void QMdiArea_setViewMode(QMdiArea* self, int mode);
int QMdiArea_viewMode(const QMdiArea* self);
bool QMdiArea_documentMode(const QMdiArea* self);
void QMdiArea_setDocumentMode(QMdiArea* self, bool enabled);
void QMdiArea_setTabsClosable(QMdiArea* self, bool closable);
bool QMdiArea_tabsClosable(const QMdiArea* self);
void QMdiArea_setTabsMovable(QMdiArea* self, bool movable);
bool QMdiArea_tabsMovable(const QMdiArea* self);
void QMdiArea_setTabShape(QMdiArea* self, int shape);
int QMdiArea_tabShape(const QMdiArea* self);
void QMdiArea_setTabPosition(QMdiArea* self, int position);
int QMdiArea_tabPosition(const QMdiArea* self);
void QMdiArea_subWindowActivated(QMdiArea* self, QMdiSubWindow* param1);
void QMdiArea_connect_subWindowActivated(QMdiArea* self, intptr_t slot);
void QMdiArea_setActiveSubWindow(QMdiArea* self, QMdiSubWindow* window);
void QMdiArea_tileSubWindows(QMdiArea* self);
void QMdiArea_cascadeSubWindows(QMdiArea* self);
void QMdiArea_closeActiveSubWindow(QMdiArea* self);
void QMdiArea_closeAllSubWindows(QMdiArea* self);
void QMdiArea_activateNextSubWindow(QMdiArea* self);
void QMdiArea_activatePreviousSubWindow(QMdiArea* self);
void QMdiArea_setupViewport(QMdiArea* self, QWidget* viewport);
bool QMdiArea_event(QMdiArea* self, QEvent* event);
bool QMdiArea_eventFilter(QMdiArea* self, QObject* object, QEvent* event);
void QMdiArea_paintEvent(QMdiArea* self, QPaintEvent* paintEvent);
void QMdiArea_childEvent(QMdiArea* self, QChildEvent* childEvent);
void QMdiArea_resizeEvent(QMdiArea* self, QResizeEvent* resizeEvent);
void QMdiArea_timerEvent(QMdiArea* self, QTimerEvent* timerEvent);
void QMdiArea_showEvent(QMdiArea* self, QShowEvent* showEvent);
bool QMdiArea_viewportEvent(QMdiArea* self, QEvent* event);
void QMdiArea_scrollContentsBy(QMdiArea* self, int dx, int dy);
struct miqt_string QMdiArea_tr2(const char* s, const char* c);
struct miqt_string QMdiArea_tr3(const char* s, const char* c, int n);
struct miqt_array /* of QMdiSubWindow* */  QMdiArea_subWindowList1(const QMdiArea* self, int order);
QMdiSubWindow* QMdiArea_addSubWindow2(QMdiArea* self, QWidget* widget, int flags);
void QMdiArea_setOption2(QMdiArea* self, int option, bool on);
bool QMdiArea_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QMdiArea_virtualbase_sizeHint(const void* self);
bool QMdiArea_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QMdiArea_virtualbase_minimumSizeHint(const void* self);
bool QMdiArea_override_virtual_setupViewport(void* self, intptr_t slot);
void QMdiArea_virtualbase_setupViewport(void* self, QWidget* viewport);
bool QMdiArea_override_virtual_event(void* self, intptr_t slot);
bool QMdiArea_virtualbase_event(void* self, QEvent* event);
bool QMdiArea_override_virtual_eventFilter(void* self, intptr_t slot);
bool QMdiArea_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);
bool QMdiArea_override_virtual_paintEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_paintEvent(void* self, QPaintEvent* paintEvent);
bool QMdiArea_override_virtual_childEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_childEvent(void* self, QChildEvent* childEvent);
bool QMdiArea_override_virtual_resizeEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_resizeEvent(void* self, QResizeEvent* resizeEvent);
bool QMdiArea_override_virtual_timerEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_timerEvent(void* self, QTimerEvent* timerEvent);
bool QMdiArea_override_virtual_showEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_showEvent(void* self, QShowEvent* showEvent);
bool QMdiArea_override_virtual_viewportEvent(void* self, intptr_t slot);
bool QMdiArea_virtualbase_viewportEvent(void* self, QEvent* event);
bool QMdiArea_override_virtual_scrollContentsBy(void* self, intptr_t slot);
void QMdiArea_virtualbase_scrollContentsBy(void* self, int dx, int dy);
bool QMdiArea_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QMdiArea_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
bool QMdiArea_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1);
bool QMdiArea_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QMdiArea_override_virtual_wheelEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
bool QMdiArea_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
bool QMdiArea_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1);
bool QMdiArea_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* param1);
bool QMdiArea_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* param1);
bool QMdiArea_override_virtual_dropEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_dropEvent(void* self, QDropEvent* param1);
bool QMdiArea_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QMdiArea_override_virtual_viewportSizeHint(void* self, intptr_t slot);
QSize* QMdiArea_virtualbase_viewportSizeHint(const void* self);
bool QMdiArea_override_virtual_changeEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_changeEvent(void* self, QEvent* param1);
bool QMdiArea_override_virtual_initStyleOption(void* self, intptr_t slot);
void QMdiArea_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);
bool QMdiArea_override_virtual_devType(void* self, intptr_t slot);
int QMdiArea_virtualbase_devType(const void* self);
bool QMdiArea_override_virtual_setVisible(void* self, intptr_t slot);
void QMdiArea_virtualbase_setVisible(void* self, bool visible);
bool QMdiArea_override_virtual_heightForWidth(void* self, intptr_t slot);
int QMdiArea_virtualbase_heightForWidth(const void* self, int param1);
bool QMdiArea_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QMdiArea_virtualbase_hasHeightForWidth(const void* self);
bool QMdiArea_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QMdiArea_virtualbase_paintEngine(const void* self);
bool QMdiArea_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QMdiArea_override_virtual_focusInEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QMdiArea_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QMdiArea_override_virtual_enterEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QMdiArea_override_virtual_leaveEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_leaveEvent(void* self, QEvent* event);
bool QMdiArea_override_virtual_moveEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QMdiArea_override_virtual_closeEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QMdiArea_override_virtual_tabletEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QMdiArea_override_virtual_actionEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QMdiArea_override_virtual_hideEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QMdiArea_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QMdiArea_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QMdiArea_override_virtual_metric(void* self, intptr_t slot);
int QMdiArea_virtualbase_metric(const void* self, int param1);
bool QMdiArea_override_virtual_initPainter(void* self, intptr_t slot);
void QMdiArea_virtualbase_initPainter(const void* self, QPainter* painter);
bool QMdiArea_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QMdiArea_virtualbase_redirected(const void* self, QPoint* offset);
bool QMdiArea_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QMdiArea_virtualbase_sharedPainter(const void* self);
bool QMdiArea_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QMdiArea_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QMdiArea_virtualbase_inputMethodQuery(const void* self, int param1);
bool QMdiArea_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QMdiArea_virtualbase_focusNextPrevChild(void* self, bool next);
bool QMdiArea_override_virtual_customEvent(void* self, intptr_t slot);
void QMdiArea_virtualbase_customEvent(void* self, QEvent* event);
bool QMdiArea_override_virtual_connectNotify(void* self, intptr_t slot);
void QMdiArea_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QMdiArea_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QMdiArea_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QMdiArea_delete(QMdiArea* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
