#pragma once
#ifndef MIQT_QT6_GEN_QSCROLLAREA_H
#define MIQT_QT6_GEN_QSCROLLAREA_H

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
class QScrollArea;
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
typedef struct QScrollArea QScrollArea;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QScrollArea* QScrollArea_new(QWidget* parent);
QScrollArea* QScrollArea_new2();
void QScrollArea_virtbase(QScrollArea* src, QAbstractScrollArea** outptr_QAbstractScrollArea);
QMetaObject* QScrollArea_metaObject(const QScrollArea* self);
void* QScrollArea_metacast(QScrollArea* self, const char* param1);
struct miqt_string QScrollArea_tr(const char* s);
QWidget* QScrollArea_widget(const QScrollArea* self);
void QScrollArea_setWidget(QScrollArea* self, QWidget* widget);
QWidget* QScrollArea_takeWidget(QScrollArea* self);
bool QScrollArea_widgetResizable(const QScrollArea* self);
void QScrollArea_setWidgetResizable(QScrollArea* self, bool resizable);
QSize* QScrollArea_sizeHint(const QScrollArea* self);
bool QScrollArea_focusNextPrevChild(QScrollArea* self, bool next);
int QScrollArea_alignment(const QScrollArea* self);
void QScrollArea_setAlignment(QScrollArea* self, int alignment);
void QScrollArea_ensureVisible(QScrollArea* self, int x, int y);
void QScrollArea_ensureWidgetVisible(QScrollArea* self, QWidget* childWidget);
bool QScrollArea_event(QScrollArea* self, QEvent* param1);
bool QScrollArea_eventFilter(QScrollArea* self, QObject* param1, QEvent* param2);
void QScrollArea_resizeEvent(QScrollArea* self, QResizeEvent* param1);
void QScrollArea_scrollContentsBy(QScrollArea* self, int dx, int dy);
QSize* QScrollArea_viewportSizeHint(const QScrollArea* self);
struct miqt_string QScrollArea_tr2(const char* s, const char* c);
struct miqt_string QScrollArea_tr3(const char* s, const char* c, int n);
void QScrollArea_ensureVisible2(QScrollArea* self, int x, int y, int xmargin);
void QScrollArea_ensureVisible3(QScrollArea* self, int x, int y, int xmargin, int ymargin);
void QScrollArea_ensureWidgetVisible2(QScrollArea* self, QWidget* childWidget, int xmargin);
void QScrollArea_ensureWidgetVisible3(QScrollArea* self, QWidget* childWidget, int xmargin, int ymargin);

bool QScrollArea_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QScrollArea_virtualbase_sizeHint(const void* self);
bool QScrollArea_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QScrollArea_virtualbase_focusNextPrevChild(void* self, bool next);
bool QScrollArea_override_virtual_event(void* self, intptr_t slot);
bool QScrollArea_virtualbase_event(void* self, QEvent* param1);
bool QScrollArea_override_virtual_eventFilter(void* self, intptr_t slot);
bool QScrollArea_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QScrollArea_override_virtual_resizeEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QScrollArea_override_virtual_scrollContentsBy(void* self, intptr_t slot);
void QScrollArea_virtualbase_scrollContentsBy(void* self, int dx, int dy);
bool QScrollArea_override_virtual_viewportSizeHint(void* self, intptr_t slot);
QSize* QScrollArea_virtualbase_viewportSizeHint(const void* self);
bool QScrollArea_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QScrollArea_virtualbase_minimumSizeHint(const void* self);
bool QScrollArea_override_virtual_setupViewport(void* self, intptr_t slot);
void QScrollArea_virtualbase_setupViewport(void* self, QWidget* viewport);
bool QScrollArea_override_virtual_viewportEvent(void* self, intptr_t slot);
bool QScrollArea_virtualbase_viewportEvent(void* self, QEvent* param1);
bool QScrollArea_override_virtual_paintEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QScrollArea_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QScrollArea_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
bool QScrollArea_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1);
bool QScrollArea_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QScrollArea_override_virtual_wheelEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
bool QScrollArea_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
bool QScrollArea_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1);
bool QScrollArea_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* param1);
bool QScrollArea_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* param1);
bool QScrollArea_override_virtual_dropEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_dropEvent(void* self, QDropEvent* param1);
bool QScrollArea_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QScrollArea_override_virtual_changeEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_changeEvent(void* self, QEvent* param1);
bool QScrollArea_override_virtual_initStyleOption(void* self, intptr_t slot);
void QScrollArea_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);
bool QScrollArea_override_virtual_devType(void* self, intptr_t slot);
int QScrollArea_virtualbase_devType(const void* self);
bool QScrollArea_override_virtual_setVisible(void* self, intptr_t slot);
void QScrollArea_virtualbase_setVisible(void* self, bool visible);
bool QScrollArea_override_virtual_heightForWidth(void* self, intptr_t slot);
int QScrollArea_virtualbase_heightForWidth(const void* self, int param1);
bool QScrollArea_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QScrollArea_virtualbase_hasHeightForWidth(const void* self);
bool QScrollArea_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QScrollArea_virtualbase_paintEngine(const void* self);
bool QScrollArea_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QScrollArea_override_virtual_focusInEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QScrollArea_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QScrollArea_override_virtual_enterEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QScrollArea_override_virtual_leaveEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_leaveEvent(void* self, QEvent* event);
bool QScrollArea_override_virtual_moveEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QScrollArea_override_virtual_closeEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QScrollArea_override_virtual_tabletEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QScrollArea_override_virtual_actionEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QScrollArea_override_virtual_showEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_showEvent(void* self, QShowEvent* event);
bool QScrollArea_override_virtual_hideEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QScrollArea_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QScrollArea_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QScrollArea_override_virtual_metric(void* self, intptr_t slot);
int QScrollArea_virtualbase_metric(const void* self, int param1);
bool QScrollArea_override_virtual_initPainter(void* self, intptr_t slot);
void QScrollArea_virtualbase_initPainter(const void* self, QPainter* painter);
bool QScrollArea_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QScrollArea_virtualbase_redirected(const void* self, QPoint* offset);
bool QScrollArea_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QScrollArea_virtualbase_sharedPainter(const void* self);
bool QScrollArea_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QScrollArea_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QScrollArea_virtualbase_inputMethodQuery(const void* self, int param1);
bool QScrollArea_override_virtual_timerEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QScrollArea_override_virtual_childEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_childEvent(void* self, QChildEvent* event);
bool QScrollArea_override_virtual_customEvent(void* self, intptr_t slot);
void QScrollArea_virtualbase_customEvent(void* self, QEvent* event);
bool QScrollArea_override_virtual_connectNotify(void* self, intptr_t slot);
void QScrollArea_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QScrollArea_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QScrollArea_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QScrollArea_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
QMargins* QScrollArea_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
void QScrollArea_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QScrollArea_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QScrollArea_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QScrollArea_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QScrollArea_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QScrollArea_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QScrollArea_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QScrollArea_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QScrollArea_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QScrollArea_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QScrollArea_delete(QScrollArea* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
