#pragma once
#ifndef MIQT_QT_GEN_QPROGRESSDIALOG_H
#define MIQT_QT_GEN_QPROGRESSDIALOG_H

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
class QLabel;
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
class QProgressBar;
class QProgressDialog;
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
typedef struct QLabel QLabel;
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
typedef struct QProgressBar QProgressBar;
typedef struct QProgressDialog QProgressDialog;
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

QProgressDialog* QProgressDialog_new(QWidget* parent);
QProgressDialog* QProgressDialog_new2();
QProgressDialog* QProgressDialog_new3(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum);
QProgressDialog* QProgressDialog_new4(QWidget* parent, int flags);
QProgressDialog* QProgressDialog_new5(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QWidget* parent);
QProgressDialog* QProgressDialog_new6(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QWidget* parent, int flags);
void QProgressDialog_virtbase(QProgressDialog* src, QDialog** outptr_QDialog);
QMetaObject* QProgressDialog_metaObject(const QProgressDialog* self);
void* QProgressDialog_metacast(QProgressDialog* self, const char* param1);
struct miqt_string QProgressDialog_tr(const char* s);
struct miqt_string QProgressDialog_trUtf8(const char* s);
void QProgressDialog_setLabel(QProgressDialog* self, QLabel* label);
void QProgressDialog_setCancelButton(QProgressDialog* self, QPushButton* button);
void QProgressDialog_setBar(QProgressDialog* self, QProgressBar* bar);
bool QProgressDialog_wasCanceled(const QProgressDialog* self);
int QProgressDialog_minimum(const QProgressDialog* self);
int QProgressDialog_maximum(const QProgressDialog* self);
int QProgressDialog_value(const QProgressDialog* self);
QSize* QProgressDialog_sizeHint(const QProgressDialog* self);
struct miqt_string QProgressDialog_labelText(const QProgressDialog* self);
int QProgressDialog_minimumDuration(const QProgressDialog* self);
void QProgressDialog_setAutoReset(QProgressDialog* self, bool reset);
bool QProgressDialog_autoReset(const QProgressDialog* self);
void QProgressDialog_setAutoClose(QProgressDialog* self, bool close);
bool QProgressDialog_autoClose(const QProgressDialog* self);
void QProgressDialog_cancel(QProgressDialog* self);
void QProgressDialog_reset(QProgressDialog* self);
void QProgressDialog_setMaximum(QProgressDialog* self, int maximum);
void QProgressDialog_setMinimum(QProgressDialog* self, int minimum);
void QProgressDialog_setRange(QProgressDialog* self, int minimum, int maximum);
void QProgressDialog_setValue(QProgressDialog* self, int progress);
void QProgressDialog_setLabelText(QProgressDialog* self, struct miqt_string text);
void QProgressDialog_setCancelButtonText(QProgressDialog* self, struct miqt_string text);
void QProgressDialog_setMinimumDuration(QProgressDialog* self, int ms);
void QProgressDialog_canceled(QProgressDialog* self);
void QProgressDialog_connect_canceled(QProgressDialog* self, intptr_t slot);
void QProgressDialog_resizeEvent(QProgressDialog* self, QResizeEvent* event);
void QProgressDialog_closeEvent(QProgressDialog* self, QCloseEvent* event);
void QProgressDialog_changeEvent(QProgressDialog* self, QEvent* event);
void QProgressDialog_showEvent(QProgressDialog* self, QShowEvent* event);
struct miqt_string QProgressDialog_tr2(const char* s, const char* c);
struct miqt_string QProgressDialog_tr3(const char* s, const char* c, int n);
struct miqt_string QProgressDialog_trUtf82(const char* s, const char* c);
struct miqt_string QProgressDialog_trUtf83(const char* s, const char* c, int n);
bool QProgressDialog_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QProgressDialog_virtualbase_sizeHint(const void* self);
bool QProgressDialog_override_virtual_resizeEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QProgressDialog_override_virtual_closeEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QProgressDialog_override_virtual_changeEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_changeEvent(void* self, QEvent* event);
bool QProgressDialog_override_virtual_showEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_showEvent(void* self, QShowEvent* event);
bool QProgressDialog_override_virtual_setVisible(void* self, intptr_t slot);
void QProgressDialog_virtualbase_setVisible(void* self, bool visible);
bool QProgressDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QProgressDialog_virtualbase_minimumSizeHint(const void* self);
bool QProgressDialog_override_virtual_open(void* self, intptr_t slot);
void QProgressDialog_virtualbase_open(void* self);
bool QProgressDialog_override_virtual_exec(void* self, intptr_t slot);
int QProgressDialog_virtualbase_exec(void* self);
bool QProgressDialog_override_virtual_done(void* self, intptr_t slot);
void QProgressDialog_virtualbase_done(void* self, int param1);
bool QProgressDialog_override_virtual_accept(void* self, intptr_t slot);
void QProgressDialog_virtualbase_accept(void* self);
bool QProgressDialog_override_virtual_reject(void* self, intptr_t slot);
void QProgressDialog_virtualbase_reject(void* self);
bool QProgressDialog_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QProgressDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
bool QProgressDialog_override_virtual_eventFilter(void* self, intptr_t slot);
bool QProgressDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QProgressDialog_override_virtual_devType(void* self, intptr_t slot);
int QProgressDialog_virtualbase_devType(const void* self);
bool QProgressDialog_override_virtual_heightForWidth(void* self, intptr_t slot);
int QProgressDialog_virtualbase_heightForWidth(const void* self, int param1);
bool QProgressDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QProgressDialog_virtualbase_hasHeightForWidth(const void* self);
bool QProgressDialog_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QProgressDialog_virtualbase_paintEngine(const void* self);
bool QProgressDialog_override_virtual_event(void* self, intptr_t slot);
bool QProgressDialog_virtualbase_event(void* self, QEvent* event);
bool QProgressDialog_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QProgressDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QProgressDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QProgressDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QProgressDialog_override_virtual_wheelEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QProgressDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QProgressDialog_override_virtual_focusInEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QProgressDialog_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QProgressDialog_override_virtual_enterEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_enterEvent(void* self, QEvent* event);
bool QProgressDialog_override_virtual_leaveEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_leaveEvent(void* self, QEvent* event);
bool QProgressDialog_override_virtual_paintEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QProgressDialog_override_virtual_moveEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QProgressDialog_override_virtual_tabletEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QProgressDialog_override_virtual_actionEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QProgressDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QProgressDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QProgressDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QProgressDialog_override_virtual_dropEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QProgressDialog_override_virtual_hideEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QProgressDialog_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QProgressDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QProgressDialog_override_virtual_metric(void* self, intptr_t slot);
int QProgressDialog_virtualbase_metric(const void* self, int param1);
bool QProgressDialog_override_virtual_initPainter(void* self, intptr_t slot);
void QProgressDialog_virtualbase_initPainter(const void* self, QPainter* painter);
bool QProgressDialog_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QProgressDialog_virtualbase_redirected(const void* self, QPoint* offset);
bool QProgressDialog_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QProgressDialog_virtualbase_sharedPainter(const void* self);
bool QProgressDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QProgressDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QProgressDialog_virtualbase_inputMethodQuery(const void* self, int param1);
bool QProgressDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QProgressDialog_virtualbase_focusNextPrevChild(void* self, bool next);
bool QProgressDialog_override_virtual_timerEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QProgressDialog_override_virtual_childEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_childEvent(void* self, QChildEvent* event);
bool QProgressDialog_override_virtual_customEvent(void* self, intptr_t slot);
void QProgressDialog_virtualbase_customEvent(void* self, QEvent* event);
bool QProgressDialog_override_virtual_connectNotify(void* self, intptr_t slot);
void QProgressDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QProgressDialog_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QProgressDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QProgressDialog_protectedbase_forceShow(bool* _dynamic_cast_ok, void* self);
void QProgressDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
void QProgressDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QProgressDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QProgressDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QProgressDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QProgressDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QProgressDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QProgressDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QProgressDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QProgressDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QProgressDialog_delete(QProgressDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
