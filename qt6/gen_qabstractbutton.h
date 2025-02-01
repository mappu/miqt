#pragma once
#ifndef MIQT_QT6_GEN_QABSTRACTBUTTON_H
#define MIQT_QT6_GEN_QABSTRACTBUTTON_H

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
class QButtonGroup;
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
class QIcon;
class QInputMethodEvent;
class QKeyEvent;
class QKeySequence;
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
typedef struct QAbstractButton QAbstractButton;
typedef struct QActionEvent QActionEvent;
typedef struct QButtonGroup QButtonGroup;
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
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
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

QAbstractButton* QAbstractButton_new(QWidget* parent);
QAbstractButton* QAbstractButton_new2();
void QAbstractButton_virtbase(QAbstractButton* src, QWidget** outptr_QWidget);
QMetaObject* QAbstractButton_metaObject(const QAbstractButton* self);
void* QAbstractButton_metacast(QAbstractButton* self, const char* param1);
struct miqt_string QAbstractButton_tr(const char* s);
void QAbstractButton_setText(QAbstractButton* self, struct miqt_string text);
struct miqt_string QAbstractButton_text(const QAbstractButton* self);
void QAbstractButton_setIcon(QAbstractButton* self, QIcon* icon);
QIcon* QAbstractButton_icon(const QAbstractButton* self);
QSize* QAbstractButton_iconSize(const QAbstractButton* self);
void QAbstractButton_setShortcut(QAbstractButton* self, QKeySequence* key);
QKeySequence* QAbstractButton_shortcut(const QAbstractButton* self);
void QAbstractButton_setCheckable(QAbstractButton* self, bool checkable);
bool QAbstractButton_isCheckable(const QAbstractButton* self);
bool QAbstractButton_isChecked(const QAbstractButton* self);
void QAbstractButton_setDown(QAbstractButton* self, bool down);
bool QAbstractButton_isDown(const QAbstractButton* self);
void QAbstractButton_setAutoRepeat(QAbstractButton* self, bool autoRepeat);
bool QAbstractButton_autoRepeat(const QAbstractButton* self);
void QAbstractButton_setAutoRepeatDelay(QAbstractButton* self, int autoRepeatDelay);
int QAbstractButton_autoRepeatDelay(const QAbstractButton* self);
void QAbstractButton_setAutoRepeatInterval(QAbstractButton* self, int autoRepeatInterval);
int QAbstractButton_autoRepeatInterval(const QAbstractButton* self);
void QAbstractButton_setAutoExclusive(QAbstractButton* self, bool autoExclusive);
bool QAbstractButton_autoExclusive(const QAbstractButton* self);
QButtonGroup* QAbstractButton_group(const QAbstractButton* self);
void QAbstractButton_setIconSize(QAbstractButton* self, QSize* size);
void QAbstractButton_animateClick(QAbstractButton* self);
void QAbstractButton_click(QAbstractButton* self);
void QAbstractButton_toggle(QAbstractButton* self);
void QAbstractButton_setChecked(QAbstractButton* self, bool checked);
void QAbstractButton_pressed(QAbstractButton* self);
void QAbstractButton_connect_pressed(QAbstractButton* self, intptr_t slot);
void QAbstractButton_released(QAbstractButton* self);
void QAbstractButton_connect_released(QAbstractButton* self, intptr_t slot);
void QAbstractButton_clicked(QAbstractButton* self);
void QAbstractButton_connect_clicked(QAbstractButton* self, intptr_t slot);
void QAbstractButton_toggled(QAbstractButton* self, bool checked);
void QAbstractButton_connect_toggled(QAbstractButton* self, intptr_t slot);
void QAbstractButton_paintEvent(QAbstractButton* self, QPaintEvent* e);
bool QAbstractButton_hitButton(const QAbstractButton* self, QPoint* pos);
void QAbstractButton_checkStateSet(QAbstractButton* self);
void QAbstractButton_nextCheckState(QAbstractButton* self);
bool QAbstractButton_event(QAbstractButton* self, QEvent* e);
void QAbstractButton_keyPressEvent(QAbstractButton* self, QKeyEvent* e);
void QAbstractButton_keyReleaseEvent(QAbstractButton* self, QKeyEvent* e);
void QAbstractButton_mousePressEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_mouseReleaseEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_mouseMoveEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_focusInEvent(QAbstractButton* self, QFocusEvent* e);
void QAbstractButton_focusOutEvent(QAbstractButton* self, QFocusEvent* e);
void QAbstractButton_changeEvent(QAbstractButton* self, QEvent* e);
void QAbstractButton_timerEvent(QAbstractButton* self, QTimerEvent* e);
struct miqt_string QAbstractButton_tr2(const char* s, const char* c);
struct miqt_string QAbstractButton_tr3(const char* s, const char* c, int n);
void QAbstractButton_clicked1(QAbstractButton* self, bool checked);
void QAbstractButton_connect_clicked1(QAbstractButton* self, intptr_t slot);
bool QAbstractButton_override_virtual_paintEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_paintEvent(void* self, QPaintEvent* e);
bool QAbstractButton_override_virtual_hitButton(void* self, intptr_t slot);
bool QAbstractButton_virtualbase_hitButton(const void* self, QPoint* pos);
bool QAbstractButton_override_virtual_checkStateSet(void* self, intptr_t slot);
void QAbstractButton_virtualbase_checkStateSet(void* self);
bool QAbstractButton_override_virtual_nextCheckState(void* self, intptr_t slot);
void QAbstractButton_virtualbase_nextCheckState(void* self);
bool QAbstractButton_override_virtual_event(void* self, intptr_t slot);
bool QAbstractButton_virtualbase_event(void* self, QEvent* e);
bool QAbstractButton_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_keyPressEvent(void* self, QKeyEvent* e);
bool QAbstractButton_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e);
bool QAbstractButton_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e);
bool QAbstractButton_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);
bool QAbstractButton_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);
bool QAbstractButton_override_virtual_focusInEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_focusInEvent(void* self, QFocusEvent* e);
bool QAbstractButton_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_focusOutEvent(void* self, QFocusEvent* e);
bool QAbstractButton_override_virtual_changeEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_changeEvent(void* self, QEvent* e);
bool QAbstractButton_override_virtual_timerEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_timerEvent(void* self, QTimerEvent* e);
bool QAbstractButton_override_virtual_devType(void* self, intptr_t slot);
int QAbstractButton_virtualbase_devType(const void* self);
bool QAbstractButton_override_virtual_setVisible(void* self, intptr_t slot);
void QAbstractButton_virtualbase_setVisible(void* self, bool visible);
bool QAbstractButton_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QAbstractButton_virtualbase_sizeHint(const void* self);
bool QAbstractButton_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QAbstractButton_virtualbase_minimumSizeHint(const void* self);
bool QAbstractButton_override_virtual_heightForWidth(void* self, intptr_t slot);
int QAbstractButton_virtualbase_heightForWidth(const void* self, int param1);
bool QAbstractButton_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QAbstractButton_virtualbase_hasHeightForWidth(const void* self);
bool QAbstractButton_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QAbstractButton_virtualbase_paintEngine(const void* self);
bool QAbstractButton_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QAbstractButton_override_virtual_wheelEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QAbstractButton_override_virtual_enterEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QAbstractButton_override_virtual_leaveEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_leaveEvent(void* self, QEvent* event);
bool QAbstractButton_override_virtual_moveEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QAbstractButton_override_virtual_resizeEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QAbstractButton_override_virtual_closeEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QAbstractButton_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QAbstractButton_override_virtual_tabletEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QAbstractButton_override_virtual_actionEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QAbstractButton_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QAbstractButton_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QAbstractButton_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QAbstractButton_override_virtual_dropEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QAbstractButton_override_virtual_showEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_showEvent(void* self, QShowEvent* event);
bool QAbstractButton_override_virtual_hideEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QAbstractButton_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QAbstractButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QAbstractButton_override_virtual_metric(void* self, intptr_t slot);
int QAbstractButton_virtualbase_metric(const void* self, int param1);
bool QAbstractButton_override_virtual_initPainter(void* self, intptr_t slot);
void QAbstractButton_virtualbase_initPainter(const void* self, QPainter* painter);
bool QAbstractButton_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QAbstractButton_virtualbase_redirected(const void* self, QPoint* offset);
bool QAbstractButton_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QAbstractButton_virtualbase_sharedPainter(const void* self);
bool QAbstractButton_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QAbstractButton_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QAbstractButton_virtualbase_inputMethodQuery(const void* self, int param1);
bool QAbstractButton_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QAbstractButton_virtualbase_focusNextPrevChild(void* self, bool next);
bool QAbstractButton_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAbstractButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAbstractButton_override_virtual_childEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAbstractButton_override_virtual_customEvent(void* self, intptr_t slot);
void QAbstractButton_virtualbase_customEvent(void* self, QEvent* event);
bool QAbstractButton_override_virtual_connectNotify(void* self, intptr_t slot);
void QAbstractButton_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAbstractButton_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAbstractButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QAbstractButton_delete(QAbstractButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
