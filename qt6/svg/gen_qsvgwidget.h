#pragma once
#ifndef MIQT_QT6_SVG_GEN_QSVGWIDGET_H
#define MIQT_QT6_SVG_GEN_QSVGWIDGET_H

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
class QEnterEvent;
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
class QSvgRenderer;
class QSvgWidget;
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
typedef struct QSvgRenderer QSvgRenderer;
typedef struct QSvgWidget QSvgWidget;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QSvgWidget* QSvgWidget_new(QWidget* parent);
QSvgWidget* QSvgWidget_new2();
QSvgWidget* QSvgWidget_new3(struct miqt_string file);
QSvgWidget* QSvgWidget_new4(struct miqt_string file, QWidget* parent);
void QSvgWidget_virtbase(QSvgWidget* src, QWidget** outptr_QWidget);
QMetaObject* QSvgWidget_metaObject(const QSvgWidget* self);
void* QSvgWidget_metacast(QSvgWidget* self, const char* param1);
struct miqt_string QSvgWidget_tr(const char* s);
QSvgRenderer* QSvgWidget_renderer(const QSvgWidget* self);
QSize* QSvgWidget_sizeHint(const QSvgWidget* self);
void QSvgWidget_load(QSvgWidget* self, struct miqt_string file);
void QSvgWidget_loadWithContents(QSvgWidget* self, struct miqt_string contents);
void QSvgWidget_paintEvent(QSvgWidget* self, QPaintEvent* event);
struct miqt_string QSvgWidget_tr2(const char* s, const char* c);
struct miqt_string QSvgWidget_tr3(const char* s, const char* c, int n);

bool QSvgWidget_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QSvgWidget_virtualbase_sizeHint(const void* self);
bool QSvgWidget_override_virtual_paintEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QSvgWidget_override_virtual_devType(void* self, intptr_t slot);
int QSvgWidget_virtualbase_devType(const void* self);
bool QSvgWidget_override_virtual_setVisible(void* self, intptr_t slot);
void QSvgWidget_virtualbase_setVisible(void* self, bool visible);
bool QSvgWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QSvgWidget_virtualbase_minimumSizeHint(const void* self);
bool QSvgWidget_override_virtual_heightForWidth(void* self, intptr_t slot);
int QSvgWidget_virtualbase_heightForWidth(const void* self, int param1);
bool QSvgWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QSvgWidget_virtualbase_hasHeightForWidth(const void* self);
bool QSvgWidget_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QSvgWidget_virtualbase_paintEngine(const void* self);
bool QSvgWidget_override_virtual_event(void* self, intptr_t slot);
bool QSvgWidget_virtualbase_event(void* self, QEvent* event);
bool QSvgWidget_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QSvgWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QSvgWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QSvgWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QSvgWidget_override_virtual_wheelEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QSvgWidget_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QSvgWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QSvgWidget_override_virtual_focusInEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QSvgWidget_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QSvgWidget_override_virtual_enterEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QSvgWidget_override_virtual_leaveEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_leaveEvent(void* self, QEvent* event);
bool QSvgWidget_override_virtual_moveEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QSvgWidget_override_virtual_resizeEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QSvgWidget_override_virtual_closeEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QSvgWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QSvgWidget_override_virtual_tabletEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QSvgWidget_override_virtual_actionEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QSvgWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QSvgWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QSvgWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QSvgWidget_override_virtual_dropEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QSvgWidget_override_virtual_showEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_showEvent(void* self, QShowEvent* event);
bool QSvgWidget_override_virtual_hideEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QSvgWidget_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QSvgWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QSvgWidget_override_virtual_changeEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_changeEvent(void* self, QEvent* param1);
bool QSvgWidget_override_virtual_metric(void* self, intptr_t slot);
int QSvgWidget_virtualbase_metric(const void* self, int param1);
bool QSvgWidget_override_virtual_initPainter(void* self, intptr_t slot);
void QSvgWidget_virtualbase_initPainter(const void* self, QPainter* painter);
bool QSvgWidget_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QSvgWidget_virtualbase_redirected(const void* self, QPoint* offset);
bool QSvgWidget_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QSvgWidget_virtualbase_sharedPainter(const void* self);
bool QSvgWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QSvgWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QSvgWidget_virtualbase_inputMethodQuery(const void* self, int param1);
bool QSvgWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QSvgWidget_virtualbase_focusNextPrevChild(void* self, bool next);
bool QSvgWidget_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSvgWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSvgWidget_override_virtual_timerEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSvgWidget_override_virtual_childEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSvgWidget_override_virtual_customEvent(void* self, intptr_t slot);
void QSvgWidget_virtualbase_customEvent(void* self, QEvent* event);
bool QSvgWidget_override_virtual_connectNotify(void* self, intptr_t slot);
void QSvgWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSvgWidget_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSvgWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QSvgWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QSvgWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QSvgWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QSvgWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QSvgWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QSvgWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSvgWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSvgWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSvgWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QSvgWidget_delete(QSvgWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
