#pragma once
#ifndef MIQT_QT_GEN_QDIALOGBUTTONBOX_H
#define MIQT_QT_GEN_QDIALOGBUTTONBOX_H

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
class QContextMenuEvent;
class QDialogButtonBox;
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
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDialogButtonBox QDialogButtonBox;
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

QDialogButtonBox* QDialogButtonBox_new(QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new2();
QDialogButtonBox* QDialogButtonBox_new3(int orientation);
QDialogButtonBox* QDialogButtonBox_new4(int buttons);
QDialogButtonBox* QDialogButtonBox_new5(int buttons, int orientation);
QDialogButtonBox* QDialogButtonBox_new6(int orientation, QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new7(int buttons, QWidget* parent);
QDialogButtonBox* QDialogButtonBox_new8(int buttons, int orientation, QWidget* parent);
void QDialogButtonBox_virtbase(QDialogButtonBox* src, QWidget** outptr_QWidget);
QMetaObject* QDialogButtonBox_metaObject(const QDialogButtonBox* self);
void* QDialogButtonBox_metacast(QDialogButtonBox* self, const char* param1);
struct miqt_string QDialogButtonBox_tr(const char* s);
struct miqt_string QDialogButtonBox_trUtf8(const char* s);
void QDialogButtonBox_setOrientation(QDialogButtonBox* self, int orientation);
int QDialogButtonBox_orientation(const QDialogButtonBox* self);
void QDialogButtonBox_addButton(QDialogButtonBox* self, QAbstractButton* button, int role);
QPushButton* QDialogButtonBox_addButton2(QDialogButtonBox* self, struct miqt_string text, int role);
QPushButton* QDialogButtonBox_addButtonWithButton(QDialogButtonBox* self, int button);
void QDialogButtonBox_removeButton(QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_clear(QDialogButtonBox* self);
struct miqt_array /* of QAbstractButton* */  QDialogButtonBox_buttons(const QDialogButtonBox* self);
int QDialogButtonBox_buttonRole(const QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_setStandardButtons(QDialogButtonBox* self, int buttons);
int QDialogButtonBox_standardButtons(const QDialogButtonBox* self);
int QDialogButtonBox_standardButton(const QDialogButtonBox* self, QAbstractButton* button);
QPushButton* QDialogButtonBox_button(const QDialogButtonBox* self, int which);
void QDialogButtonBox_setCenterButtons(QDialogButtonBox* self, bool center);
bool QDialogButtonBox_centerButtons(const QDialogButtonBox* self);
void QDialogButtonBox_clicked(QDialogButtonBox* self, QAbstractButton* button);
void QDialogButtonBox_connect_clicked(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_accepted(QDialogButtonBox* self);
void QDialogButtonBox_connect_accepted(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_helpRequested(QDialogButtonBox* self);
void QDialogButtonBox_connect_helpRequested(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_rejected(QDialogButtonBox* self);
void QDialogButtonBox_connect_rejected(QDialogButtonBox* self, intptr_t slot);
void QDialogButtonBox_changeEvent(QDialogButtonBox* self, QEvent* event);
bool QDialogButtonBox_event(QDialogButtonBox* self, QEvent* event);
struct miqt_string QDialogButtonBox_tr2(const char* s, const char* c);
struct miqt_string QDialogButtonBox_tr3(const char* s, const char* c, int n);
struct miqt_string QDialogButtonBox_trUtf82(const char* s, const char* c);
struct miqt_string QDialogButtonBox_trUtf83(const char* s, const char* c, int n);
bool QDialogButtonBox_override_virtual_changeEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_changeEvent(void* self, QEvent* event);
bool QDialogButtonBox_override_virtual_event(void* self, intptr_t slot);
bool QDialogButtonBox_virtualbase_event(void* self, QEvent* event);
bool QDialogButtonBox_override_virtual_devType(void* self, intptr_t slot);
int QDialogButtonBox_virtualbase_devType(const void* self);
bool QDialogButtonBox_override_virtual_setVisible(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_setVisible(void* self, bool visible);
bool QDialogButtonBox_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QDialogButtonBox_virtualbase_sizeHint(const void* self);
bool QDialogButtonBox_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QDialogButtonBox_virtualbase_minimumSizeHint(const void* self);
bool QDialogButtonBox_override_virtual_heightForWidth(void* self, intptr_t slot);
int QDialogButtonBox_virtualbase_heightForWidth(const void* self, int param1);
bool QDialogButtonBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QDialogButtonBox_virtualbase_hasHeightForWidth(const void* self);
bool QDialogButtonBox_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QDialogButtonBox_virtualbase_paintEngine(const void* self);
bool QDialogButtonBox_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QDialogButtonBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QDialogButtonBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QDialogButtonBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QDialogButtonBox_override_virtual_wheelEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QDialogButtonBox_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QDialogButtonBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QDialogButtonBox_override_virtual_focusInEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QDialogButtonBox_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QDialogButtonBox_override_virtual_enterEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_enterEvent(void* self, QEvent* event);
bool QDialogButtonBox_override_virtual_leaveEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_leaveEvent(void* self, QEvent* event);
bool QDialogButtonBox_override_virtual_paintEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QDialogButtonBox_override_virtual_moveEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QDialogButtonBox_override_virtual_resizeEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QDialogButtonBox_override_virtual_closeEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QDialogButtonBox_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QDialogButtonBox_override_virtual_tabletEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QDialogButtonBox_override_virtual_actionEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QDialogButtonBox_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QDialogButtonBox_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QDialogButtonBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QDialogButtonBox_override_virtual_dropEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QDialogButtonBox_override_virtual_showEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_showEvent(void* self, QShowEvent* event);
bool QDialogButtonBox_override_virtual_hideEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QDialogButtonBox_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QDialogButtonBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QDialogButtonBox_override_virtual_metric(void* self, intptr_t slot);
int QDialogButtonBox_virtualbase_metric(const void* self, int param1);
bool QDialogButtonBox_override_virtual_initPainter(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_initPainter(const void* self, QPainter* painter);
bool QDialogButtonBox_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QDialogButtonBox_virtualbase_redirected(const void* self, QPoint* offset);
bool QDialogButtonBox_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QDialogButtonBox_virtualbase_sharedPainter(const void* self);
bool QDialogButtonBox_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QDialogButtonBox_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QDialogButtonBox_virtualbase_inputMethodQuery(const void* self, int param1);
bool QDialogButtonBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QDialogButtonBox_virtualbase_focusNextPrevChild(void* self, bool next);
bool QDialogButtonBox_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDialogButtonBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDialogButtonBox_override_virtual_timerEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDialogButtonBox_override_virtual_childEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDialogButtonBox_override_virtual_customEvent(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_customEvent(void* self, QEvent* event);
bool QDialogButtonBox_override_virtual_connectNotify(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDialogButtonBox_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDialogButtonBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QDialogButtonBox_delete(QDialogButtonBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
