#pragma once
#ifndef MIQT_QT6_GEN_QCHECKBOX_H
#define MIQT_QT6_GEN_QCHECKBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractButton;
class QActionEvent;
class QCheckBox;
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
class QStyleOptionButton;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QActionEvent QActionEvent;
typedef struct QCheckBox QCheckBox;
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
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QCheckBox* QCheckBox_new(QWidget* parent);
QCheckBox* QCheckBox_new2();
QCheckBox* QCheckBox_new3(struct miqt_string text);
QCheckBox* QCheckBox_new4(struct miqt_string text, QWidget* parent);
void QCheckBox_virtbase(QCheckBox* src, QAbstractButton** outptr_QAbstractButton);
QMetaObject* QCheckBox_metaObject(const QCheckBox* self);
void* QCheckBox_metacast(QCheckBox* self, const char* param1);
struct miqt_string QCheckBox_tr(const char* s);
QSize* QCheckBox_sizeHint(const QCheckBox* self);
QSize* QCheckBox_minimumSizeHint(const QCheckBox* self);
void QCheckBox_setTristate(QCheckBox* self);
bool QCheckBox_isTristate(const QCheckBox* self);
int QCheckBox_checkState(const QCheckBox* self);
void QCheckBox_setCheckState(QCheckBox* self, int state);
void QCheckBox_stateChanged(QCheckBox* self, int param1);
void QCheckBox_connect_stateChanged(QCheckBox* self, intptr_t slot);
bool QCheckBox_event(QCheckBox* self, QEvent* e);
bool QCheckBox_hitButton(const QCheckBox* self, QPoint* pos);
void QCheckBox_checkStateSet(QCheckBox* self);
void QCheckBox_nextCheckState(QCheckBox* self);
void QCheckBox_paintEvent(QCheckBox* self, QPaintEvent* param1);
void QCheckBox_mouseMoveEvent(QCheckBox* self, QMouseEvent* param1);
void QCheckBox_initStyleOption(const QCheckBox* self, QStyleOptionButton* option);
struct miqt_string QCheckBox_tr2(const char* s, const char* c);
struct miqt_string QCheckBox_tr3(const char* s, const char* c, int n);
void QCheckBox_setTristateWithBool(QCheckBox* self, bool y);

bool QCheckBox_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QCheckBox_virtualbase_sizeHint(const void* self);
bool QCheckBox_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QCheckBox_virtualbase_minimumSizeHint(const void* self);
bool QCheckBox_override_virtual_event(void* self, intptr_t slot);
bool QCheckBox_virtualbase_event(void* self, QEvent* e);
bool QCheckBox_override_virtual_hitButton(void* self, intptr_t slot);
bool QCheckBox_virtualbase_hitButton(const void* self, QPoint* pos);
bool QCheckBox_override_virtual_checkStateSet(void* self, intptr_t slot);
void QCheckBox_virtualbase_checkStateSet(void* self);
bool QCheckBox_override_virtual_nextCheckState(void* self, intptr_t slot);
void QCheckBox_virtualbase_nextCheckState(void* self);
bool QCheckBox_override_virtual_paintEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QCheckBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QCheckBox_override_virtual_initStyleOption(void* self, intptr_t slot);
void QCheckBox_virtualbase_initStyleOption(const void* self, QStyleOptionButton* option);
bool QCheckBox_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_keyPressEvent(void* self, QKeyEvent* e);
bool QCheckBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e);
bool QCheckBox_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_mousePressEvent(void* self, QMouseEvent* e);
bool QCheckBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);
bool QCheckBox_override_virtual_focusInEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_focusInEvent(void* self, QFocusEvent* e);
bool QCheckBox_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_focusOutEvent(void* self, QFocusEvent* e);
bool QCheckBox_override_virtual_changeEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_changeEvent(void* self, QEvent* e);
bool QCheckBox_override_virtual_timerEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_timerEvent(void* self, QTimerEvent* e);
bool QCheckBox_override_virtual_devType(void* self, intptr_t slot);
int QCheckBox_virtualbase_devType(const void* self);
bool QCheckBox_override_virtual_setVisible(void* self, intptr_t slot);
void QCheckBox_virtualbase_setVisible(void* self, bool visible);
bool QCheckBox_override_virtual_heightForWidth(void* self, intptr_t slot);
int QCheckBox_virtualbase_heightForWidth(const void* self, int param1);
bool QCheckBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QCheckBox_virtualbase_hasHeightForWidth(const void* self);
bool QCheckBox_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QCheckBox_virtualbase_paintEngine(const void* self);
bool QCheckBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QCheckBox_override_virtual_wheelEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QCheckBox_override_virtual_enterEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QCheckBox_override_virtual_leaveEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_leaveEvent(void* self, QEvent* event);
bool QCheckBox_override_virtual_moveEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QCheckBox_override_virtual_resizeEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QCheckBox_override_virtual_closeEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QCheckBox_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QCheckBox_override_virtual_tabletEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QCheckBox_override_virtual_actionEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QCheckBox_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QCheckBox_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QCheckBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QCheckBox_override_virtual_dropEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QCheckBox_override_virtual_showEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_showEvent(void* self, QShowEvent* event);
bool QCheckBox_override_virtual_hideEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QCheckBox_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QCheckBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QCheckBox_override_virtual_metric(void* self, intptr_t slot);
int QCheckBox_virtualbase_metric(const void* self, int param1);
bool QCheckBox_override_virtual_initPainter(void* self, intptr_t slot);
void QCheckBox_virtualbase_initPainter(const void* self, QPainter* painter);
bool QCheckBox_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QCheckBox_virtualbase_redirected(const void* self, QPoint* offset);
bool QCheckBox_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QCheckBox_virtualbase_sharedPainter(const void* self);
bool QCheckBox_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QCheckBox_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QCheckBox_virtualbase_inputMethodQuery(const void* self, int param1);
bool QCheckBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QCheckBox_virtualbase_focusNextPrevChild(void* self, bool next);
bool QCheckBox_override_virtual_eventFilter(void* self, intptr_t slot);
bool QCheckBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QCheckBox_override_virtual_childEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_childEvent(void* self, QChildEvent* event);
bool QCheckBox_override_virtual_customEvent(void* self, intptr_t slot);
void QCheckBox_virtualbase_customEvent(void* self, QEvent* event);
bool QCheckBox_override_virtual_connectNotify(void* self, intptr_t slot);
void QCheckBox_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QCheckBox_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QCheckBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QCheckBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QCheckBox_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QCheckBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QCheckBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QCheckBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QCheckBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QCheckBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QCheckBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QCheckBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QCheckBox_delete(QCheckBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
