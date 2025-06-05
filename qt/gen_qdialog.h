#pragma once
#ifndef MIQT_QT_GEN_QDIALOG_H
#define MIQT_QT_GEN_QDIALOG_H

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
class QDialog;
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
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDialog QDialog;
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
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QDialog* QDialog_new(QWidget* parent);
QDialog* QDialog_new2();
QDialog* QDialog_new3(QWidget* parent, int f);
void QDialog_virtbase(QDialog* src, QWidget** outptr_QWidget);
QMetaObject* QDialog_metaObject(const QDialog* self);
void* QDialog_metacast(QDialog* self, const char* param1);
struct miqt_string QDialog_tr(const char* s);
struct miqt_string QDialog_trUtf8(const char* s);
int QDialog_result(const QDialog* self);
void QDialog_setVisible(QDialog* self, bool visible);
void QDialog_setOrientation(QDialog* self, int orientation);
int QDialog_orientation(const QDialog* self);
void QDialog_setExtension(QDialog* self, QWidget* extension);
QWidget* QDialog_extension(const QDialog* self);
QSize* QDialog_sizeHint(const QDialog* self);
QSize* QDialog_minimumSizeHint(const QDialog* self);
void QDialog_setSizeGripEnabled(QDialog* self, bool sizeGripEnabled);
bool QDialog_isSizeGripEnabled(const QDialog* self);
void QDialog_setModal(QDialog* self, bool modal);
void QDialog_setResult(QDialog* self, int r);
void QDialog_finished(QDialog* self, int result);
void QDialog_connect_finished(QDialog* self, intptr_t slot);
void QDialog_accepted(QDialog* self);
void QDialog_connect_accepted(QDialog* self, intptr_t slot);
void QDialog_rejected(QDialog* self);
void QDialog_connect_rejected(QDialog* self, intptr_t slot);
void QDialog_open(QDialog* self);
int QDialog_exec(QDialog* self);
void QDialog_done(QDialog* self, int param1);
void QDialog_accept(QDialog* self);
void QDialog_reject(QDialog* self);
void QDialog_showExtension(QDialog* self, bool param1);
void QDialog_keyPressEvent(QDialog* self, QKeyEvent* param1);
void QDialog_closeEvent(QDialog* self, QCloseEvent* param1);
void QDialog_showEvent(QDialog* self, QShowEvent* param1);
void QDialog_resizeEvent(QDialog* self, QResizeEvent* param1);
void QDialog_contextMenuEvent(QDialog* self, QContextMenuEvent* param1);
bool QDialog_eventFilter(QDialog* self, QObject* param1, QEvent* param2);
struct miqt_string QDialog_tr2(const char* s, const char* c);
struct miqt_string QDialog_tr3(const char* s, const char* c, int n);
struct miqt_string QDialog_trUtf82(const char* s, const char* c);
struct miqt_string QDialog_trUtf83(const char* s, const char* c, int n);

bool QDialog_override_virtual_setVisible(void* self, intptr_t slot);
void QDialog_virtualbase_setVisible(void* self, bool visible);
bool QDialog_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QDialog_virtualbase_sizeHint(const void* self);
bool QDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QDialog_virtualbase_minimumSizeHint(const void* self);
bool QDialog_override_virtual_open(void* self, intptr_t slot);
void QDialog_virtualbase_open(void* self);
bool QDialog_override_virtual_exec(void* self, intptr_t slot);
int QDialog_virtualbase_exec(void* self);
bool QDialog_override_virtual_done(void* self, intptr_t slot);
void QDialog_virtualbase_done(void* self, int param1);
bool QDialog_override_virtual_accept(void* self, intptr_t slot);
void QDialog_virtualbase_accept(void* self);
bool QDialog_override_virtual_reject(void* self, intptr_t slot);
void QDialog_virtualbase_reject(void* self);
bool QDialog_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QDialog_override_virtual_closeEvent(void* self, intptr_t slot);
void QDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1);
bool QDialog_override_virtual_showEvent(void* self, intptr_t slot);
void QDialog_virtualbase_showEvent(void* self, QShowEvent* param1);
bool QDialog_override_virtual_resizeEvent(void* self, intptr_t slot);
void QDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
bool QDialog_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QDialog_override_virtual_devType(void* self, intptr_t slot);
int QDialog_virtualbase_devType(const void* self);
bool QDialog_override_virtual_heightForWidth(void* self, intptr_t slot);
int QDialog_virtualbase_heightForWidth(const void* self, int param1);
bool QDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QDialog_virtualbase_hasHeightForWidth(const void* self);
bool QDialog_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QDialog_virtualbase_paintEngine(const void* self);
bool QDialog_override_virtual_event(void* self, intptr_t slot);
bool QDialog_virtualbase_event(void* self, QEvent* event);
bool QDialog_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QDialog_override_virtual_wheelEvent(void* self, intptr_t slot);
void QDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QDialog_override_virtual_focusInEvent(void* self, intptr_t slot);
void QDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QDialog_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QDialog_override_virtual_enterEvent(void* self, intptr_t slot);
void QDialog_virtualbase_enterEvent(void* self, QEvent* event);
bool QDialog_override_virtual_leaveEvent(void* self, intptr_t slot);
void QDialog_virtualbase_leaveEvent(void* self, QEvent* event);
bool QDialog_override_virtual_paintEvent(void* self, intptr_t slot);
void QDialog_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QDialog_override_virtual_moveEvent(void* self, intptr_t slot);
void QDialog_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QDialog_override_virtual_tabletEvent(void* self, intptr_t slot);
void QDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QDialog_override_virtual_actionEvent(void* self, intptr_t slot);
void QDialog_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QDialog_override_virtual_dropEvent(void* self, intptr_t slot);
void QDialog_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QDialog_override_virtual_hideEvent(void* self, intptr_t slot);
void QDialog_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QDialog_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QDialog_override_virtual_changeEvent(void* self, intptr_t slot);
void QDialog_virtualbase_changeEvent(void* self, QEvent* param1);
bool QDialog_override_virtual_metric(void* self, intptr_t slot);
int QDialog_virtualbase_metric(const void* self, int param1);
bool QDialog_override_virtual_initPainter(void* self, intptr_t slot);
void QDialog_virtualbase_initPainter(const void* self, QPainter* painter);
bool QDialog_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QDialog_virtualbase_redirected(const void* self, QPoint* offset);
bool QDialog_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QDialog_virtualbase_sharedPainter(const void* self);
bool QDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QDialog_virtualbase_inputMethodQuery(const void* self, int param1);
bool QDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QDialog_virtualbase_focusNextPrevChild(void* self, bool next);
bool QDialog_override_virtual_timerEvent(void* self, intptr_t slot);
void QDialog_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDialog_override_virtual_childEvent(void* self, intptr_t slot);
void QDialog_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDialog_override_virtual_customEvent(void* self, intptr_t slot);
void QDialog_virtualbase_customEvent(void* self, QEvent* event);
bool QDialog_override_virtual_connectNotify(void* self, intptr_t slot);
void QDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDialog_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
void QDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QDialog_delete(QDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
