#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_ARROW_BUTTON_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_ARROW_BUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractButton;
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
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QPushButton;
class QRect;
class QResizeEvent;
class QShowEvent;
class QSize;
class QStyleOptionButton;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
class QwtArrowButton;
#else
typedef struct QAbstractButton QAbstractButton;
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
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QPushButton QPushButton;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtArrowButton QwtArrowButton;
#endif

QwtArrowButton* QwtArrowButton_new(int num, int param2);
QwtArrowButton* QwtArrowButton_new2(int num, int param2, QWidget* parent);
void QwtArrowButton_virtbase(QwtArrowButton* src, QPushButton** outptr_QPushButton);
int QwtArrowButton_arrowType(const QwtArrowButton* self);
int QwtArrowButton_num(const QwtArrowButton* self);
QSize* QwtArrowButton_sizeHint(const QwtArrowButton* self);
QSize* QwtArrowButton_minimumSizeHint(const QwtArrowButton* self);
void QwtArrowButton_paintEvent(QwtArrowButton* self, QPaintEvent* event);
void QwtArrowButton_drawButtonLabel(QwtArrowButton* self, QPainter* param1);
void QwtArrowButton_drawArrow(const QwtArrowButton* self, QPainter* param1, QRect* param2, int param3);
QRect* QwtArrowButton_labelRect(const QwtArrowButton* self);
QSize* QwtArrowButton_arrowSize(const QwtArrowButton* self, int param1, QSize* boundingSize);
void QwtArrowButton_keyPressEvent(QwtArrowButton* self, QKeyEvent* param1);

bool QwtArrowButton_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtArrowButton_virtualbase_sizeHint(const void* self);
bool QwtArrowButton_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtArrowButton_virtualbase_minimumSizeHint(const void* self);
bool QwtArrowButton_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QwtArrowButton_override_virtual_drawButtonLabel(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_drawButtonLabel(void* self, QPainter* param1);
bool QwtArrowButton_override_virtual_drawArrow(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_drawArrow(const void* self, QPainter* param1, QRect* param2, int param3);
bool QwtArrowButton_override_virtual_labelRect(void* self, intptr_t slot);
QRect* QwtArrowButton_virtualbase_labelRect(const void* self);
bool QwtArrowButton_override_virtual_arrowSize(void* self, intptr_t slot);
QSize* QwtArrowButton_virtualbase_arrowSize(const void* self, int param1, QSize* boundingSize);
bool QwtArrowButton_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QwtArrowButton_override_virtual_event(void* self, intptr_t slot);
bool QwtArrowButton_virtualbase_event(void* self, QEvent* e);
bool QwtArrowButton_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_focusInEvent(void* self, QFocusEvent* param1);
bool QwtArrowButton_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_focusOutEvent(void* self, QFocusEvent* param1);
bool QwtArrowButton_override_virtual_hitButton(void* self, intptr_t slot);
bool QwtArrowButton_virtualbase_hitButton(const void* self, QPoint* pos);
bool QwtArrowButton_override_virtual_checkStateSet(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_checkStateSet(void* self);
bool QwtArrowButton_override_virtual_nextCheckState(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_nextCheckState(void* self);
bool QwtArrowButton_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e);
bool QwtArrowButton_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e);
bool QwtArrowButton_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);
bool QwtArrowButton_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);
bool QwtArrowButton_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_changeEvent(void* self, QEvent* e);
bool QwtArrowButton_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_timerEvent(void* self, QTimerEvent* e);
bool QwtArrowButton_override_virtual_devType(void* self, intptr_t slot);
int QwtArrowButton_virtualbase_devType(const void* self);
bool QwtArrowButton_override_virtual_setVisible(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_setVisible(void* self, bool visible);
bool QwtArrowButton_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtArrowButton_virtualbase_heightForWidth(const void* self, int param1);
bool QwtArrowButton_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtArrowButton_virtualbase_hasHeightForWidth(const void* self);
bool QwtArrowButton_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtArrowButton_virtualbase_paintEngine(const void* self);
bool QwtArrowButton_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtArrowButton_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QwtArrowButton_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtArrowButton_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtArrowButton_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtArrowButton_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QwtArrowButton_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtArrowButton_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtArrowButton_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtArrowButton_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtArrowButton_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtArrowButton_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtArrowButton_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtArrowButton_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtArrowButton_override_virtual_showEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtArrowButton_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtArrowButton_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtArrowButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtArrowButton_override_virtual_metric(void* self, intptr_t slot);
int QwtArrowButton_virtualbase_metric(const void* self, int param1);
bool QwtArrowButton_override_virtual_initPainter(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtArrowButton_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtArrowButton_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtArrowButton_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtArrowButton_virtualbase_sharedPainter(const void* self);
bool QwtArrowButton_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtArrowButton_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtArrowButton_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtArrowButton_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtArrowButton_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtArrowButton_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtArrowButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtArrowButton_override_virtual_childEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtArrowButton_override_virtual_customEvent(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_customEvent(void* self, QEvent* event);
bool QwtArrowButton_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtArrowButton_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtArrowButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtArrowButton_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionButton* option);
void QwtArrowButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtArrowButton_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtArrowButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtArrowButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtArrowButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtArrowButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtArrowButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtArrowButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtArrowButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtArrowButton_delete(QwtArrowButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
