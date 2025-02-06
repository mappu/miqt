#pragma once
#ifndef MIQT_QT6_GEN_QPUSHBUTTON_H
#define MIQT_QT6_GEN_QPUSHBUTTON_H

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
class QMenu;
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
class QStyleOptionButton;
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
typedef struct QMenu QMenu;
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
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QPushButton* QPushButton_new(QWidget* parent);
QPushButton* QPushButton_new2();
QPushButton* QPushButton_new3(struct miqt_string text);
QPushButton* QPushButton_new4(QIcon* icon, struct miqt_string text);
QPushButton* QPushButton_new5(struct miqt_string text, QWidget* parent);
QPushButton* QPushButton_new6(QIcon* icon, struct miqt_string text, QWidget* parent);
void QPushButton_virtbase(QPushButton* src, QAbstractButton** outptr_QAbstractButton);
QMetaObject* QPushButton_metaObject(const QPushButton* self);
void* QPushButton_metacast(QPushButton* self, const char* param1);
struct miqt_string QPushButton_tr(const char* s);
QSize* QPushButton_sizeHint(const QPushButton* self);
QSize* QPushButton_minimumSizeHint(const QPushButton* self);
bool QPushButton_autoDefault(const QPushButton* self);
void QPushButton_setAutoDefault(QPushButton* self, bool autoDefault);
bool QPushButton_isDefault(const QPushButton* self);
void QPushButton_setDefault(QPushButton* self, bool defaultVal);
void QPushButton_setMenu(QPushButton* self, QMenu* menu);
QMenu* QPushButton_menu(const QPushButton* self);
void QPushButton_setFlat(QPushButton* self, bool flat);
bool QPushButton_isFlat(const QPushButton* self);
void QPushButton_showMenu(QPushButton* self);
bool QPushButton_event(QPushButton* self, QEvent* e);
void QPushButton_paintEvent(QPushButton* self, QPaintEvent* param1);
void QPushButton_keyPressEvent(QPushButton* self, QKeyEvent* param1);
void QPushButton_focusInEvent(QPushButton* self, QFocusEvent* param1);
void QPushButton_focusOutEvent(QPushButton* self, QFocusEvent* param1);
void QPushButton_mouseMoveEvent(QPushButton* self, QMouseEvent* param1);
void QPushButton_initStyleOption(const QPushButton* self, QStyleOptionButton* option);
bool QPushButton_hitButton(const QPushButton* self, QPoint* pos);
struct miqt_string QPushButton_tr2(const char* s, const char* c);
struct miqt_string QPushButton_tr3(const char* s, const char* c, int n);
bool QPushButton_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QPushButton_virtualbase_sizeHint(const void* self);
bool QPushButton_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QPushButton_virtualbase_minimumSizeHint(const void* self);
bool QPushButton_override_virtual_event(void* self, intptr_t slot);
bool QPushButton_virtualbase_event(void* self, QEvent* e);
bool QPushButton_override_virtual_paintEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QPushButton_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QPushButton_override_virtual_focusInEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_focusInEvent(void* self, QFocusEvent* param1);
bool QPushButton_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_focusOutEvent(void* self, QFocusEvent* param1);
bool QPushButton_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QPushButton_override_virtual_initStyleOption(void* self, intptr_t slot);
void QPushButton_virtualbase_initStyleOption(const void* self, QStyleOptionButton* option);
bool QPushButton_override_virtual_hitButton(void* self, intptr_t slot);
bool QPushButton_virtualbase_hitButton(const void* self, QPoint* pos);
bool QPushButton_override_virtual_checkStateSet(void* self, intptr_t slot);
void QPushButton_virtualbase_checkStateSet(void* self);
bool QPushButton_override_virtual_nextCheckState(void* self, intptr_t slot);
void QPushButton_virtualbase_nextCheckState(void* self);
bool QPushButton_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e);
bool QPushButton_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e);
bool QPushButton_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);
bool QPushButton_override_virtual_changeEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_changeEvent(void* self, QEvent* e);
bool QPushButton_override_virtual_timerEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_timerEvent(void* self, QTimerEvent* e);
bool QPushButton_override_virtual_devType(void* self, intptr_t slot);
int QPushButton_virtualbase_devType(const void* self);
bool QPushButton_override_virtual_setVisible(void* self, intptr_t slot);
void QPushButton_virtualbase_setVisible(void* self, bool visible);
bool QPushButton_override_virtual_heightForWidth(void* self, intptr_t slot);
int QPushButton_virtualbase_heightForWidth(const void* self, int param1);
bool QPushButton_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QPushButton_virtualbase_hasHeightForWidth(const void* self);
bool QPushButton_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QPushButton_virtualbase_paintEngine(const void* self);
bool QPushButton_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QPushButton_override_virtual_wheelEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QPushButton_override_virtual_enterEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QPushButton_override_virtual_leaveEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_leaveEvent(void* self, QEvent* event);
bool QPushButton_override_virtual_moveEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QPushButton_override_virtual_resizeEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QPushButton_override_virtual_closeEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QPushButton_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QPushButton_override_virtual_tabletEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QPushButton_override_virtual_actionEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QPushButton_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QPushButton_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QPushButton_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QPushButton_override_virtual_dropEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QPushButton_override_virtual_showEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_showEvent(void* self, QShowEvent* event);
bool QPushButton_override_virtual_hideEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QPushButton_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QPushButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QPushButton_override_virtual_metric(void* self, intptr_t slot);
int QPushButton_virtualbase_metric(const void* self, int param1);
bool QPushButton_override_virtual_initPainter(void* self, intptr_t slot);
void QPushButton_virtualbase_initPainter(const void* self, QPainter* painter);
bool QPushButton_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QPushButton_virtualbase_redirected(const void* self, QPoint* offset);
bool QPushButton_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QPushButton_virtualbase_sharedPainter(const void* self);
bool QPushButton_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QPushButton_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QPushButton_virtualbase_inputMethodQuery(const void* self, int param1);
bool QPushButton_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QPushButton_virtualbase_focusNextPrevChild(void* self, bool next);
bool QPushButton_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPushButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPushButton_override_virtual_childEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPushButton_override_virtual_customEvent(void* self, intptr_t slot);
void QPushButton_virtualbase_customEvent(void* self, QEvent* event);
bool QPushButton_override_virtual_connectNotify(void* self, intptr_t slot);
void QPushButton_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPushButton_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPushButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QPushButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QPushButton_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QPushButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QPushButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QPushButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QPushButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPushButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPushButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPushButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QPushButton_delete(QPushButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
