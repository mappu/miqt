#pragma once
#ifndef MIQT_QT6_GEN_QABSTRACTSCROLLAREA_H
#define MIQT_QT6_GEN_QABSTRACTSCROLLAREA_H

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
class QMargins;
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
class QScrollBar;
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
typedef struct QMargins QMargins;
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
typedef struct QScrollBar QScrollBar;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QAbstractScrollArea* QAbstractScrollArea_new(QWidget* parent);
QAbstractScrollArea* QAbstractScrollArea_new2();
void QAbstractScrollArea_virtbase(QAbstractScrollArea* src, QFrame** outptr_QFrame);
QMetaObject* QAbstractScrollArea_metaObject(const QAbstractScrollArea* self);
void* QAbstractScrollArea_metacast(QAbstractScrollArea* self, const char* param1);
struct miqt_string QAbstractScrollArea_tr(const char* s);
int QAbstractScrollArea_verticalScrollBarPolicy(const QAbstractScrollArea* self);
void QAbstractScrollArea_setVerticalScrollBarPolicy(QAbstractScrollArea* self, int verticalScrollBarPolicy);
QScrollBar* QAbstractScrollArea_verticalScrollBar(const QAbstractScrollArea* self);
void QAbstractScrollArea_setVerticalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar);
int QAbstractScrollArea_horizontalScrollBarPolicy(const QAbstractScrollArea* self);
void QAbstractScrollArea_setHorizontalScrollBarPolicy(QAbstractScrollArea* self, int horizontalScrollBarPolicy);
QScrollBar* QAbstractScrollArea_horizontalScrollBar(const QAbstractScrollArea* self);
void QAbstractScrollArea_setHorizontalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar);
QWidget* QAbstractScrollArea_cornerWidget(const QAbstractScrollArea* self);
void QAbstractScrollArea_setCornerWidget(QAbstractScrollArea* self, QWidget* widget);
void QAbstractScrollArea_addScrollBarWidget(QAbstractScrollArea* self, QWidget* widget, int alignment);
struct miqt_array /* of QWidget* */  QAbstractScrollArea_scrollBarWidgets(QAbstractScrollArea* self, int alignment);
QWidget* QAbstractScrollArea_viewport(const QAbstractScrollArea* self);
void QAbstractScrollArea_setViewport(QAbstractScrollArea* self, QWidget* widget);
QSize* QAbstractScrollArea_maximumViewportSize(const QAbstractScrollArea* self);
QSize* QAbstractScrollArea_minimumSizeHint(const QAbstractScrollArea* self);
QSize* QAbstractScrollArea_sizeHint(const QAbstractScrollArea* self);
void QAbstractScrollArea_setupViewport(QAbstractScrollArea* self, QWidget* viewport);
int QAbstractScrollArea_sizeAdjustPolicy(const QAbstractScrollArea* self);
void QAbstractScrollArea_setSizeAdjustPolicy(QAbstractScrollArea* self, int policy);
bool QAbstractScrollArea_eventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2);
bool QAbstractScrollArea_event(QAbstractScrollArea* self, QEvent* param1);
bool QAbstractScrollArea_viewportEvent(QAbstractScrollArea* self, QEvent* param1);
void QAbstractScrollArea_resizeEvent(QAbstractScrollArea* self, QResizeEvent* param1);
void QAbstractScrollArea_paintEvent(QAbstractScrollArea* self, QPaintEvent* param1);
void QAbstractScrollArea_mousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_mouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_mouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_mouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1);
void QAbstractScrollArea_wheelEvent(QAbstractScrollArea* self, QWheelEvent* param1);
void QAbstractScrollArea_contextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1);
void QAbstractScrollArea_dragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1);
void QAbstractScrollArea_dragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1);
void QAbstractScrollArea_dragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1);
void QAbstractScrollArea_dropEvent(QAbstractScrollArea* self, QDropEvent* param1);
void QAbstractScrollArea_keyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1);
void QAbstractScrollArea_scrollContentsBy(QAbstractScrollArea* self, int dx, int dy);
QSize* QAbstractScrollArea_viewportSizeHint(const QAbstractScrollArea* self);
struct miqt_string QAbstractScrollArea_tr2(const char* s, const char* c);
struct miqt_string QAbstractScrollArea_tr3(const char* s, const char* c, int n);
bool QAbstractScrollArea_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QAbstractScrollArea_virtualbase_minimumSizeHint(const void* self);
bool QAbstractScrollArea_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QAbstractScrollArea_virtualbase_sizeHint(const void* self);
bool QAbstractScrollArea_override_virtual_setupViewport(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_setupViewport(void* self, QWidget* viewport);
bool QAbstractScrollArea_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAbstractScrollArea_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QAbstractScrollArea_override_virtual_event(void* self, intptr_t slot);
bool QAbstractScrollArea_virtualbase_event(void* self, QEvent* param1);
bool QAbstractScrollArea_override_virtual_viewportEvent(void* self, intptr_t slot);
bool QAbstractScrollArea_virtualbase_viewportEvent(void* self, QEvent* param1);
bool QAbstractScrollArea_override_virtual_resizeEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QAbstractScrollArea_override_virtual_paintEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QAbstractScrollArea_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QAbstractScrollArea_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
bool QAbstractScrollArea_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1);
bool QAbstractScrollArea_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QAbstractScrollArea_override_virtual_wheelEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
bool QAbstractScrollArea_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
bool QAbstractScrollArea_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1);
bool QAbstractScrollArea_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* param1);
bool QAbstractScrollArea_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* param1);
bool QAbstractScrollArea_override_virtual_dropEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_dropEvent(void* self, QDropEvent* param1);
bool QAbstractScrollArea_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QAbstractScrollArea_override_virtual_scrollContentsBy(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_scrollContentsBy(void* self, int dx, int dy);
bool QAbstractScrollArea_override_virtual_viewportSizeHint(void* self, intptr_t slot);
QSize* QAbstractScrollArea_virtualbase_viewportSizeHint(const void* self);
bool QAbstractScrollArea_override_virtual_changeEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_changeEvent(void* self, QEvent* param1);
bool QAbstractScrollArea_override_virtual_initStyleOption(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);
bool QAbstractScrollArea_override_virtual_devType(void* self, intptr_t slot);
int QAbstractScrollArea_virtualbase_devType(const void* self);
bool QAbstractScrollArea_override_virtual_setVisible(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_setVisible(void* self, bool visible);
bool QAbstractScrollArea_override_virtual_heightForWidth(void* self, intptr_t slot);
int QAbstractScrollArea_virtualbase_heightForWidth(const void* self, int param1);
bool QAbstractScrollArea_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QAbstractScrollArea_virtualbase_hasHeightForWidth(const void* self);
bool QAbstractScrollArea_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QAbstractScrollArea_virtualbase_paintEngine(const void* self);
bool QAbstractScrollArea_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QAbstractScrollArea_override_virtual_focusInEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QAbstractScrollArea_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QAbstractScrollArea_override_virtual_enterEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QAbstractScrollArea_override_virtual_leaveEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_leaveEvent(void* self, QEvent* event);
bool QAbstractScrollArea_override_virtual_moveEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QAbstractScrollArea_override_virtual_closeEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QAbstractScrollArea_override_virtual_tabletEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QAbstractScrollArea_override_virtual_actionEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QAbstractScrollArea_override_virtual_showEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_showEvent(void* self, QShowEvent* event);
bool QAbstractScrollArea_override_virtual_hideEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QAbstractScrollArea_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QAbstractScrollArea_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QAbstractScrollArea_override_virtual_metric(void* self, intptr_t slot);
int QAbstractScrollArea_virtualbase_metric(const void* self, int param1);
bool QAbstractScrollArea_override_virtual_initPainter(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_initPainter(const void* self, QPainter* painter);
bool QAbstractScrollArea_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QAbstractScrollArea_virtualbase_redirected(const void* self, QPoint* offset);
bool QAbstractScrollArea_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QAbstractScrollArea_virtualbase_sharedPainter(const void* self);
bool QAbstractScrollArea_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QAbstractScrollArea_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QAbstractScrollArea_virtualbase_inputMethodQuery(const void* self, int param1);
bool QAbstractScrollArea_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QAbstractScrollArea_virtualbase_focusNextPrevChild(void* self, bool next);
bool QAbstractScrollArea_override_virtual_timerEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAbstractScrollArea_override_virtual_childEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAbstractScrollArea_override_virtual_customEvent(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_customEvent(void* self, QEvent* event);
bool QAbstractScrollArea_override_virtual_connectNotify(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAbstractScrollArea_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAbstractScrollArea_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QAbstractScrollArea_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
void QAbstractScrollArea_protectedbase_setViewportMarginsWithMargins(bool* _dynamic_cast_ok, void* self, QMargins* margins);
QMargins* QAbstractScrollArea_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
void QAbstractScrollArea_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QAbstractScrollArea_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QAbstractScrollArea_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QAbstractScrollArea_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QAbstractScrollArea_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QAbstractScrollArea_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QAbstractScrollArea_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAbstractScrollArea_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAbstractScrollArea_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAbstractScrollArea_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QAbstractScrollArea_delete(QAbstractScrollArea* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
