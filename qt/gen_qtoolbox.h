#pragma once
#ifndef MIQT_QT_GEN_QTOOLBOX_H
#define MIQT_QT_GEN_QTOOLBOX_H

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
class QEvent;
class QFocusEvent;
class QFrame;
class QHideEvent;
class QIcon;
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
class QStyleOptionFrame;
class QTabletEvent;
class QTimerEvent;
class QToolBox;
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
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
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
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QToolBox QToolBox;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QToolBox* QToolBox_new(QWidget* parent);
QToolBox* QToolBox_new2();
QToolBox* QToolBox_new3(QWidget* parent, int f);
void QToolBox_virtbase(QToolBox* src, QFrame** outptr_QFrame);
QMetaObject* QToolBox_metaObject(const QToolBox* self);
void* QToolBox_metacast(QToolBox* self, const char* param1);
struct miqt_string QToolBox_tr(const char* s);
struct miqt_string QToolBox_trUtf8(const char* s);
int QToolBox_addItem(QToolBox* self, QWidget* widget, struct miqt_string text);
int QToolBox_addItem2(QToolBox* self, QWidget* widget, QIcon* icon, struct miqt_string text);
int QToolBox_insertItem(QToolBox* self, int index, QWidget* widget, struct miqt_string text);
int QToolBox_insertItem2(QToolBox* self, int index, QWidget* widget, QIcon* icon, struct miqt_string text);
void QToolBox_removeItem(QToolBox* self, int index);
void QToolBox_setItemEnabled(QToolBox* self, int index, bool enabled);
bool QToolBox_isItemEnabled(const QToolBox* self, int index);
void QToolBox_setItemText(QToolBox* self, int index, struct miqt_string text);
struct miqt_string QToolBox_itemText(const QToolBox* self, int index);
void QToolBox_setItemIcon(QToolBox* self, int index, QIcon* icon);
QIcon* QToolBox_itemIcon(const QToolBox* self, int index);
void QToolBox_setItemToolTip(QToolBox* self, int index, struct miqt_string toolTip);
struct miqt_string QToolBox_itemToolTip(const QToolBox* self, int index);
int QToolBox_currentIndex(const QToolBox* self);
QWidget* QToolBox_currentWidget(const QToolBox* self);
QWidget* QToolBox_widget(const QToolBox* self, int index);
int QToolBox_indexOf(const QToolBox* self, QWidget* widget);
int QToolBox_count(const QToolBox* self);
void QToolBox_setCurrentIndex(QToolBox* self, int index);
void QToolBox_setCurrentWidget(QToolBox* self, QWidget* widget);
void QToolBox_currentChanged(QToolBox* self, int index);
void QToolBox_connect_currentChanged(QToolBox* self, intptr_t slot);
bool QToolBox_event(QToolBox* self, QEvent* e);
void QToolBox_itemInserted(QToolBox* self, int index);
void QToolBox_itemRemoved(QToolBox* self, int index);
void QToolBox_showEvent(QToolBox* self, QShowEvent* e);
void QToolBox_changeEvent(QToolBox* self, QEvent* param1);
struct miqt_string QToolBox_tr2(const char* s, const char* c);
struct miqt_string QToolBox_tr3(const char* s, const char* c, int n);
struct miqt_string QToolBox_trUtf82(const char* s, const char* c);
struct miqt_string QToolBox_trUtf83(const char* s, const char* c, int n);

bool QToolBox_override_virtual_event(void* self, intptr_t slot);
bool QToolBox_virtualbase_event(void* self, QEvent* e);
bool QToolBox_override_virtual_itemInserted(void* self, intptr_t slot);
void QToolBox_virtualbase_itemInserted(void* self, int index);
bool QToolBox_override_virtual_itemRemoved(void* self, intptr_t slot);
void QToolBox_virtualbase_itemRemoved(void* self, int index);
bool QToolBox_override_virtual_showEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_showEvent(void* self, QShowEvent* e);
bool QToolBox_override_virtual_changeEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_changeEvent(void* self, QEvent* param1);
bool QToolBox_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QToolBox_virtualbase_sizeHint(const void* self);
bool QToolBox_override_virtual_paintEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QToolBox_override_virtual_devType(void* self, intptr_t slot);
int QToolBox_virtualbase_devType(const void* self);
bool QToolBox_override_virtual_setVisible(void* self, intptr_t slot);
void QToolBox_virtualbase_setVisible(void* self, bool visible);
bool QToolBox_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QToolBox_virtualbase_minimumSizeHint(const void* self);
bool QToolBox_override_virtual_heightForWidth(void* self, intptr_t slot);
int QToolBox_virtualbase_heightForWidth(const void* self, int param1);
bool QToolBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QToolBox_virtualbase_hasHeightForWidth(const void* self);
bool QToolBox_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QToolBox_virtualbase_paintEngine(const void* self);
bool QToolBox_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QToolBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QToolBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QToolBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QToolBox_override_virtual_wheelEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QToolBox_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QToolBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QToolBox_override_virtual_focusInEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QToolBox_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QToolBox_override_virtual_enterEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_enterEvent(void* self, QEvent* event);
bool QToolBox_override_virtual_leaveEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_leaveEvent(void* self, QEvent* event);
bool QToolBox_override_virtual_moveEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QToolBox_override_virtual_resizeEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QToolBox_override_virtual_closeEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QToolBox_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QToolBox_override_virtual_tabletEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QToolBox_override_virtual_actionEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QToolBox_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QToolBox_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QToolBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QToolBox_override_virtual_dropEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QToolBox_override_virtual_hideEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QToolBox_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QToolBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QToolBox_override_virtual_metric(void* self, intptr_t slot);
int QToolBox_virtualbase_metric(const void* self, int param1);
bool QToolBox_override_virtual_initPainter(void* self, intptr_t slot);
void QToolBox_virtualbase_initPainter(const void* self, QPainter* painter);
bool QToolBox_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QToolBox_virtualbase_redirected(const void* self, QPoint* offset);
bool QToolBox_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QToolBox_virtualbase_sharedPainter(const void* self);
bool QToolBox_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QToolBox_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QToolBox_virtualbase_inputMethodQuery(const void* self, int param1);
bool QToolBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QToolBox_virtualbase_focusNextPrevChild(void* self, bool next);
bool QToolBox_override_virtual_eventFilter(void* self, intptr_t slot);
bool QToolBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QToolBox_override_virtual_timerEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QToolBox_override_virtual_childEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_childEvent(void* self, QChildEvent* event);
bool QToolBox_override_virtual_customEvent(void* self, intptr_t slot);
void QToolBox_virtualbase_customEvent(void* self, QEvent* event);
bool QToolBox_override_virtual_connectNotify(void* self, intptr_t slot);
void QToolBox_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QToolBox_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QToolBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QToolBox_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QToolBox_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
void QToolBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QToolBox_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QToolBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QToolBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QToolBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QToolBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QToolBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QToolBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QToolBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QToolBox_delete(QToolBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
