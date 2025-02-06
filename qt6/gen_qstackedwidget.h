#pragma once
#ifndef MIQT_QT6_GEN_QSTACKEDWIDGET_H
#define MIQT_QT6_GEN_QSTACKEDWIDGET_H

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
class QFrame;
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
class QResizeEvent;
class QShowEvent;
class QSize;
class QStackedWidget;
class QStyleOptionFrame;
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
typedef struct QFrame QFrame;
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
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStackedWidget QStackedWidget;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QStackedWidget* QStackedWidget_new(QWidget* parent);
QStackedWidget* QStackedWidget_new2();
void QStackedWidget_virtbase(QStackedWidget* src, QFrame** outptr_QFrame);
QMetaObject* QStackedWidget_metaObject(const QStackedWidget* self);
void* QStackedWidget_metacast(QStackedWidget* self, const char* param1);
struct miqt_string QStackedWidget_tr(const char* s);
int QStackedWidget_addWidget(QStackedWidget* self, QWidget* w);
int QStackedWidget_insertWidget(QStackedWidget* self, int index, QWidget* w);
void QStackedWidget_removeWidget(QStackedWidget* self, QWidget* w);
QWidget* QStackedWidget_currentWidget(const QStackedWidget* self);
int QStackedWidget_currentIndex(const QStackedWidget* self);
int QStackedWidget_indexOf(const QStackedWidget* self, QWidget* param1);
QWidget* QStackedWidget_widget(const QStackedWidget* self, int param1);
int QStackedWidget_count(const QStackedWidget* self);
void QStackedWidget_setCurrentIndex(QStackedWidget* self, int index);
void QStackedWidget_setCurrentWidget(QStackedWidget* self, QWidget* w);
void QStackedWidget_currentChanged(QStackedWidget* self, int param1);
void QStackedWidget_connect_currentChanged(QStackedWidget* self, intptr_t slot);
void QStackedWidget_widgetRemoved(QStackedWidget* self, int index);
void QStackedWidget_connect_widgetRemoved(QStackedWidget* self, intptr_t slot);
bool QStackedWidget_event(QStackedWidget* self, QEvent* e);
struct miqt_string QStackedWidget_tr2(const char* s, const char* c);
struct miqt_string QStackedWidget_tr3(const char* s, const char* c, int n);
bool QStackedWidget_override_virtual_event(void* self, intptr_t slot);
bool QStackedWidget_virtualbase_event(void* self, QEvent* e);
bool QStackedWidget_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QStackedWidget_virtualbase_sizeHint(const void* self);
bool QStackedWidget_override_virtual_paintEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QStackedWidget_override_virtual_changeEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_changeEvent(void* self, QEvent* param1);
bool QStackedWidget_override_virtual_initStyleOption(void* self, intptr_t slot);
void QStackedWidget_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);
bool QStackedWidget_override_virtual_devType(void* self, intptr_t slot);
int QStackedWidget_virtualbase_devType(const void* self);
bool QStackedWidget_override_virtual_setVisible(void* self, intptr_t slot);
void QStackedWidget_virtualbase_setVisible(void* self, bool visible);
bool QStackedWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QStackedWidget_virtualbase_minimumSizeHint(const void* self);
bool QStackedWidget_override_virtual_heightForWidth(void* self, intptr_t slot);
int QStackedWidget_virtualbase_heightForWidth(const void* self, int param1);
bool QStackedWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QStackedWidget_virtualbase_hasHeightForWidth(const void* self);
bool QStackedWidget_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QStackedWidget_virtualbase_paintEngine(const void* self);
bool QStackedWidget_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QStackedWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QStackedWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QStackedWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QStackedWidget_override_virtual_wheelEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QStackedWidget_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QStackedWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QStackedWidget_override_virtual_focusInEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QStackedWidget_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QStackedWidget_override_virtual_enterEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QStackedWidget_override_virtual_leaveEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_leaveEvent(void* self, QEvent* event);
bool QStackedWidget_override_virtual_moveEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QStackedWidget_override_virtual_resizeEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QStackedWidget_override_virtual_closeEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QStackedWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QStackedWidget_override_virtual_tabletEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QStackedWidget_override_virtual_actionEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QStackedWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QStackedWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QStackedWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QStackedWidget_override_virtual_dropEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QStackedWidget_override_virtual_showEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_showEvent(void* self, QShowEvent* event);
bool QStackedWidget_override_virtual_hideEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QStackedWidget_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QStackedWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QStackedWidget_override_virtual_metric(void* self, intptr_t slot);
int QStackedWidget_virtualbase_metric(const void* self, int param1);
bool QStackedWidget_override_virtual_initPainter(void* self, intptr_t slot);
void QStackedWidget_virtualbase_initPainter(const void* self, QPainter* painter);
bool QStackedWidget_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QStackedWidget_virtualbase_redirected(const void* self, QPoint* offset);
bool QStackedWidget_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QStackedWidget_virtualbase_sharedPainter(const void* self);
bool QStackedWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QStackedWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QStackedWidget_virtualbase_inputMethodQuery(const void* self, int param1);
bool QStackedWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QStackedWidget_virtualbase_focusNextPrevChild(void* self, bool next);
bool QStackedWidget_override_virtual_eventFilter(void* self, intptr_t slot);
bool QStackedWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QStackedWidget_override_virtual_timerEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QStackedWidget_override_virtual_childEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_childEvent(void* self, QChildEvent* event);
bool QStackedWidget_override_virtual_customEvent(void* self, intptr_t slot);
void QStackedWidget_virtualbase_customEvent(void* self, QEvent* event);
bool QStackedWidget_override_virtual_connectNotify(void* self, intptr_t slot);
void QStackedWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QStackedWidget_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QStackedWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QStackedWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QStackedWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QStackedWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QStackedWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QStackedWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QStackedWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QStackedWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QStackedWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QStackedWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QStackedWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QStackedWidget_delete(QStackedWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
