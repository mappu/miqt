#pragma once
#ifndef MIQT_QT6_GEN_QFRAME_H
#define MIQT_QT6_GEN_QFRAME_H

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
class QRect;
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
typedef struct QRect QRect;
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

QFrame* QFrame_new(QWidget* parent);
QFrame* QFrame_new2();
QFrame* QFrame_new3(QWidget* parent, int f);
void QFrame_virtbase(QFrame* src, QWidget** outptr_QWidget);
QMetaObject* QFrame_metaObject(const QFrame* self);
void* QFrame_metacast(QFrame* self, const char* param1);
struct miqt_string QFrame_tr(const char* s);
int QFrame_frameStyle(const QFrame* self);
void QFrame_setFrameStyle(QFrame* self, int frameStyle);
int QFrame_frameWidth(const QFrame* self);
QSize* QFrame_sizeHint(const QFrame* self);
int QFrame_frameShape(const QFrame* self);
void QFrame_setFrameShape(QFrame* self, int frameShape);
int QFrame_frameShadow(const QFrame* self);
void QFrame_setFrameShadow(QFrame* self, int frameShadow);
int QFrame_lineWidth(const QFrame* self);
void QFrame_setLineWidth(QFrame* self, int lineWidth);
int QFrame_midLineWidth(const QFrame* self);
void QFrame_setMidLineWidth(QFrame* self, int midLineWidth);
QRect* QFrame_frameRect(const QFrame* self);
void QFrame_setFrameRect(QFrame* self, QRect* frameRect);
bool QFrame_event(QFrame* self, QEvent* e);
void QFrame_paintEvent(QFrame* self, QPaintEvent* param1);
void QFrame_changeEvent(QFrame* self, QEvent* param1);
void QFrame_initStyleOption(const QFrame* self, QStyleOptionFrame* option);
struct miqt_string QFrame_tr2(const char* s, const char* c);
struct miqt_string QFrame_tr3(const char* s, const char* c, int n);

bool QFrame_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QFrame_virtualbase_sizeHint(const void* self);
bool QFrame_override_virtual_event(void* self, intptr_t slot);
bool QFrame_virtualbase_event(void* self, QEvent* e);
bool QFrame_override_virtual_paintEvent(void* self, intptr_t slot);
void QFrame_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QFrame_override_virtual_changeEvent(void* self, intptr_t slot);
void QFrame_virtualbase_changeEvent(void* self, QEvent* param1);
bool QFrame_override_virtual_initStyleOption(void* self, intptr_t slot);
void QFrame_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);
bool QFrame_override_virtual_devType(void* self, intptr_t slot);
int QFrame_virtualbase_devType(const void* self);
bool QFrame_override_virtual_setVisible(void* self, intptr_t slot);
void QFrame_virtualbase_setVisible(void* self, bool visible);
bool QFrame_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QFrame_virtualbase_minimumSizeHint(const void* self);
bool QFrame_override_virtual_heightForWidth(void* self, intptr_t slot);
int QFrame_virtualbase_heightForWidth(const void* self, int param1);
bool QFrame_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QFrame_virtualbase_hasHeightForWidth(const void* self);
bool QFrame_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QFrame_virtualbase_paintEngine(const void* self);
bool QFrame_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QFrame_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QFrame_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QFrame_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QFrame_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QFrame_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QFrame_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QFrame_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QFrame_override_virtual_wheelEvent(void* self, intptr_t slot);
void QFrame_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QFrame_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QFrame_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QFrame_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QFrame_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QFrame_override_virtual_focusInEvent(void* self, intptr_t slot);
void QFrame_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QFrame_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QFrame_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QFrame_override_virtual_enterEvent(void* self, intptr_t slot);
void QFrame_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QFrame_override_virtual_leaveEvent(void* self, intptr_t slot);
void QFrame_virtualbase_leaveEvent(void* self, QEvent* event);
bool QFrame_override_virtual_moveEvent(void* self, intptr_t slot);
void QFrame_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QFrame_override_virtual_resizeEvent(void* self, intptr_t slot);
void QFrame_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QFrame_override_virtual_closeEvent(void* self, intptr_t slot);
void QFrame_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QFrame_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QFrame_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QFrame_override_virtual_tabletEvent(void* self, intptr_t slot);
void QFrame_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QFrame_override_virtual_actionEvent(void* self, intptr_t slot);
void QFrame_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QFrame_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QFrame_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QFrame_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QFrame_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QFrame_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QFrame_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QFrame_override_virtual_dropEvent(void* self, intptr_t slot);
void QFrame_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QFrame_override_virtual_showEvent(void* self, intptr_t slot);
void QFrame_virtualbase_showEvent(void* self, QShowEvent* event);
bool QFrame_override_virtual_hideEvent(void* self, intptr_t slot);
void QFrame_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QFrame_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QFrame_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QFrame_override_virtual_metric(void* self, intptr_t slot);
int QFrame_virtualbase_metric(const void* self, int param1);
bool QFrame_override_virtual_initPainter(void* self, intptr_t slot);
void QFrame_virtualbase_initPainter(const void* self, QPainter* painter);
bool QFrame_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QFrame_virtualbase_redirected(const void* self, QPoint* offset);
bool QFrame_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QFrame_virtualbase_sharedPainter(const void* self);
bool QFrame_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QFrame_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QFrame_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QFrame_virtualbase_inputMethodQuery(const void* self, int param1);
bool QFrame_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QFrame_virtualbase_focusNextPrevChild(void* self, bool next);
bool QFrame_override_virtual_eventFilter(void* self, intptr_t slot);
bool QFrame_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QFrame_override_virtual_timerEvent(void* self, intptr_t slot);
void QFrame_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QFrame_override_virtual_childEvent(void* self, intptr_t slot);
void QFrame_virtualbase_childEvent(void* self, QChildEvent* event);
bool QFrame_override_virtual_customEvent(void* self, intptr_t slot);
void QFrame_virtualbase_customEvent(void* self, QEvent* event);
bool QFrame_override_virtual_connectNotify(void* self, intptr_t slot);
void QFrame_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QFrame_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QFrame_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QFrame_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QFrame_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QFrame_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QFrame_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QFrame_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QFrame_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QFrame_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QFrame_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QFrame_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QFrame_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QFrame_delete(QFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
