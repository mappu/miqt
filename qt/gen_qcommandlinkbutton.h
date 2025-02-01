#pragma once
#ifndef MIQT_QT_GEN_QCOMMANDLINKBUTTON_H
#define MIQT_QT_GEN_QCOMMANDLINKBUTTON_H

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
class QChildEvent;
class QCloseEvent;
class QCommandLinkButton;
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
class QPushButton;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QCommandLinkButton QCommandLinkButton;
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
typedef struct QPushButton QPushButton;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QCommandLinkButton* QCommandLinkButton_new(QWidget* parent);
QCommandLinkButton* QCommandLinkButton_new2();
QCommandLinkButton* QCommandLinkButton_new3(struct miqt_string text);
QCommandLinkButton* QCommandLinkButton_new4(struct miqt_string text, struct miqt_string description);
QCommandLinkButton* QCommandLinkButton_new5(struct miqt_string text, QWidget* parent);
QCommandLinkButton* QCommandLinkButton_new6(struct miqt_string text, struct miqt_string description, QWidget* parent);
void QCommandLinkButton_virtbase(QCommandLinkButton* src, QPushButton** outptr_QPushButton);
QMetaObject* QCommandLinkButton_metaObject(const QCommandLinkButton* self);
void* QCommandLinkButton_metacast(QCommandLinkButton* self, const char* param1);
struct miqt_string QCommandLinkButton_tr(const char* s);
struct miqt_string QCommandLinkButton_trUtf8(const char* s);
struct miqt_string QCommandLinkButton_description(const QCommandLinkButton* self);
void QCommandLinkButton_setDescription(QCommandLinkButton* self, struct miqt_string description);
QSize* QCommandLinkButton_sizeHint(const QCommandLinkButton* self);
int QCommandLinkButton_heightForWidth(const QCommandLinkButton* self, int param1);
QSize* QCommandLinkButton_minimumSizeHint(const QCommandLinkButton* self);
bool QCommandLinkButton_event(QCommandLinkButton* self, QEvent* e);
void QCommandLinkButton_paintEvent(QCommandLinkButton* self, QPaintEvent* param1);
struct miqt_string QCommandLinkButton_tr2(const char* s, const char* c);
struct miqt_string QCommandLinkButton_tr3(const char* s, const char* c, int n);
struct miqt_string QCommandLinkButton_trUtf82(const char* s, const char* c);
struct miqt_string QCommandLinkButton_trUtf83(const char* s, const char* c, int n);
bool QCommandLinkButton_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QCommandLinkButton_virtualbase_sizeHint(const void* self);
bool QCommandLinkButton_override_virtual_heightForWidth(void* self, intptr_t slot);
int QCommandLinkButton_virtualbase_heightForWidth(const void* self, int param1);
bool QCommandLinkButton_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QCommandLinkButton_virtualbase_minimumSizeHint(const void* self);
bool QCommandLinkButton_override_virtual_event(void* self, intptr_t slot);
bool QCommandLinkButton_virtualbase_event(void* self, QEvent* e);
bool QCommandLinkButton_override_virtual_paintEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QCommandLinkButton_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QCommandLinkButton_override_virtual_focusInEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_focusInEvent(void* self, QFocusEvent* param1);
bool QCommandLinkButton_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_focusOutEvent(void* self, QFocusEvent* param1);
bool QCommandLinkButton_override_virtual_hitButton(void* self, intptr_t slot);
bool QCommandLinkButton_virtualbase_hitButton(const void* self, QPoint* pos);
bool QCommandLinkButton_override_virtual_checkStateSet(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_checkStateSet(void* self);
bool QCommandLinkButton_override_virtual_nextCheckState(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_nextCheckState(void* self);
bool QCommandLinkButton_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e);
bool QCommandLinkButton_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e);
bool QCommandLinkButton_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);
bool QCommandLinkButton_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);
bool QCommandLinkButton_override_virtual_changeEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_changeEvent(void* self, QEvent* e);
bool QCommandLinkButton_override_virtual_timerEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_timerEvent(void* self, QTimerEvent* e);
bool QCommandLinkButton_override_virtual_devType(void* self, intptr_t slot);
int QCommandLinkButton_virtualbase_devType(const void* self);
bool QCommandLinkButton_override_virtual_setVisible(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_setVisible(void* self, bool visible);
bool QCommandLinkButton_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QCommandLinkButton_virtualbase_hasHeightForWidth(const void* self);
bool QCommandLinkButton_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QCommandLinkButton_virtualbase_paintEngine(const void* self);
bool QCommandLinkButton_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QCommandLinkButton_override_virtual_wheelEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QCommandLinkButton_override_virtual_enterEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_enterEvent(void* self, QEvent* event);
bool QCommandLinkButton_override_virtual_leaveEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_leaveEvent(void* self, QEvent* event);
bool QCommandLinkButton_override_virtual_moveEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QCommandLinkButton_override_virtual_resizeEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QCommandLinkButton_override_virtual_closeEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QCommandLinkButton_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QCommandLinkButton_override_virtual_tabletEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QCommandLinkButton_override_virtual_actionEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QCommandLinkButton_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QCommandLinkButton_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QCommandLinkButton_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QCommandLinkButton_override_virtual_dropEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QCommandLinkButton_override_virtual_showEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_showEvent(void* self, QShowEvent* event);
bool QCommandLinkButton_override_virtual_hideEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QCommandLinkButton_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QCommandLinkButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QCommandLinkButton_override_virtual_metric(void* self, intptr_t slot);
int QCommandLinkButton_virtualbase_metric(const void* self, int param1);
bool QCommandLinkButton_override_virtual_initPainter(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_initPainter(const void* self, QPainter* painter);
bool QCommandLinkButton_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QCommandLinkButton_virtualbase_redirected(const void* self, QPoint* offset);
bool QCommandLinkButton_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QCommandLinkButton_virtualbase_sharedPainter(const void* self);
bool QCommandLinkButton_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QCommandLinkButton_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QCommandLinkButton_virtualbase_inputMethodQuery(const void* self, int param1);
bool QCommandLinkButton_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QCommandLinkButton_virtualbase_focusNextPrevChild(void* self, bool next);
bool QCommandLinkButton_override_virtual_eventFilter(void* self, intptr_t slot);
bool QCommandLinkButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QCommandLinkButton_override_virtual_childEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_childEvent(void* self, QChildEvent* event);
bool QCommandLinkButton_override_virtual_customEvent(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_customEvent(void* self, QEvent* event);
bool QCommandLinkButton_override_virtual_connectNotify(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QCommandLinkButton_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QCommandLinkButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QCommandLinkButton_delete(QCommandLinkButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
