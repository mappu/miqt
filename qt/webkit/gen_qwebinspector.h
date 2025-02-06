#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBINSPECTOR_H
#define MIQT_QT_WEBKIT_GEN_QWEBINSPECTOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

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
class QPoint;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWebInspector;
class QWebPage;
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
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWebInspector QWebInspector;
typedef struct QWebPage QWebPage;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QWebInspector* QWebInspector_new(QWidget* parent);
QWebInspector* QWebInspector_new2();
void QWebInspector_virtbase(QWebInspector* src, QWidget** outptr_QWidget);
QMetaObject* QWebInspector_metaObject(const QWebInspector* self);
void* QWebInspector_metacast(QWebInspector* self, const char* param1);
struct miqt_string QWebInspector_tr(const char* s);
struct miqt_string QWebInspector_trUtf8(const char* s);
void QWebInspector_setPage(QWebInspector* self, QWebPage* page);
QWebPage* QWebInspector_page(const QWebInspector* self);
QSize* QWebInspector_sizeHint(const QWebInspector* self);
bool QWebInspector_event(QWebInspector* self, QEvent* param1);
void QWebInspector_resizeEvent(QWebInspector* self, QResizeEvent* event);
void QWebInspector_showEvent(QWebInspector* self, QShowEvent* event);
void QWebInspector_hideEvent(QWebInspector* self, QHideEvent* event);
void QWebInspector_closeEvent(QWebInspector* self, QCloseEvent* event);
struct miqt_string QWebInspector_tr2(const char* s, const char* c);
struct miqt_string QWebInspector_tr3(const char* s, const char* c, int n);
struct miqt_string QWebInspector_trUtf82(const char* s, const char* c);
struct miqt_string QWebInspector_trUtf83(const char* s, const char* c, int n);
bool QWebInspector_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QWebInspector_virtualbase_sizeHint(const void* self);
bool QWebInspector_override_virtual_event(void* self, intptr_t slot);
bool QWebInspector_virtualbase_event(void* self, QEvent* param1);
bool QWebInspector_override_virtual_resizeEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QWebInspector_override_virtual_showEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_showEvent(void* self, QShowEvent* event);
bool QWebInspector_override_virtual_hideEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QWebInspector_override_virtual_closeEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QWebInspector_override_virtual_devType(void* self, intptr_t slot);
int QWebInspector_virtualbase_devType(const void* self);
bool QWebInspector_override_virtual_setVisible(void* self, intptr_t slot);
void QWebInspector_virtualbase_setVisible(void* self, bool visible);
bool QWebInspector_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QWebInspector_virtualbase_minimumSizeHint(const void* self);
bool QWebInspector_override_virtual_heightForWidth(void* self, intptr_t slot);
int QWebInspector_virtualbase_heightForWidth(const void* self, int param1);
bool QWebInspector_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QWebInspector_virtualbase_hasHeightForWidth(const void* self);
bool QWebInspector_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QWebInspector_virtualbase_paintEngine(const void* self);
bool QWebInspector_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QWebInspector_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QWebInspector_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QWebInspector_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QWebInspector_override_virtual_wheelEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QWebInspector_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QWebInspector_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QWebInspector_override_virtual_focusInEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QWebInspector_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QWebInspector_override_virtual_enterEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_enterEvent(void* self, QEvent* event);
bool QWebInspector_override_virtual_leaveEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_leaveEvent(void* self, QEvent* event);
bool QWebInspector_override_virtual_paintEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QWebInspector_override_virtual_moveEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QWebInspector_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QWebInspector_override_virtual_tabletEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QWebInspector_override_virtual_actionEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QWebInspector_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QWebInspector_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QWebInspector_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QWebInspector_override_virtual_dropEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QWebInspector_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QWebInspector_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QWebInspector_override_virtual_changeEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_changeEvent(void* self, QEvent* param1);
bool QWebInspector_override_virtual_metric(void* self, intptr_t slot);
int QWebInspector_virtualbase_metric(const void* self, int param1);
bool QWebInspector_override_virtual_initPainter(void* self, intptr_t slot);
void QWebInspector_virtualbase_initPainter(const void* self, QPainter* painter);
bool QWebInspector_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QWebInspector_virtualbase_redirected(const void* self, QPoint* offset);
bool QWebInspector_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QWebInspector_virtualbase_sharedPainter(const void* self);
bool QWebInspector_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QWebInspector_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QWebInspector_virtualbase_inputMethodQuery(const void* self, int param1);
bool QWebInspector_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QWebInspector_virtualbase_focusNextPrevChild(void* self, bool next);
bool QWebInspector_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWebInspector_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QWebInspector_override_virtual_timerEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWebInspector_override_virtual_childEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWebInspector_override_virtual_customEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_customEvent(void* self, QEvent* event);
bool QWebInspector_override_virtual_connectNotify(void* self, intptr_t slot);
void QWebInspector_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWebInspector_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWebInspector_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QWebInspector_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QWebInspector_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QWebInspector_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QWebInspector_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QWebInspector_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QWebInspector_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QWebInspector_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QWebInspector_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QWebInspector_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QWebInspector_delete(QWebInspector* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
