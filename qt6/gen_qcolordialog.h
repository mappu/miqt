#pragma once
#ifndef MIQT_QT6_GEN_QCOLORDIALOG_H
#define MIQT_QT6_GEN_QCOLORDIALOG_H

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
class QColor;
class QColorDialog;
class QContextMenuEvent;
class QDialog;
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
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QColor QColor;
typedef struct QColorDialog QColorDialog;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDialog QDialog;
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
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QColorDialog* QColorDialog_new(QWidget* parent);
QColorDialog* QColorDialog_new2();
QColorDialog* QColorDialog_new3(QColor* initial);
QColorDialog* QColorDialog_new4(QColor* initial, QWidget* parent);
void QColorDialog_virtbase(QColorDialog* src, QDialog** outptr_QDialog);
QMetaObject* QColorDialog_metaObject(const QColorDialog* self);
void* QColorDialog_metacast(QColorDialog* self, const char* param1);
struct miqt_string QColorDialog_tr(const char* s);
void QColorDialog_setCurrentColor(QColorDialog* self, QColor* color);
QColor* QColorDialog_currentColor(const QColorDialog* self);
QColor* QColorDialog_selectedColor(const QColorDialog* self);
void QColorDialog_setOption(QColorDialog* self, int option);
bool QColorDialog_testOption(const QColorDialog* self, int option);
void QColorDialog_setOptions(QColorDialog* self, int options);
int QColorDialog_options(const QColorDialog* self);
void QColorDialog_setVisible(QColorDialog* self, bool visible);
QColor* QColorDialog_getColor();
int QColorDialog_customCount();
QColor* QColorDialog_customColor(int index);
void QColorDialog_setCustomColor(int index, QColor* color);
QColor* QColorDialog_standardColor(int index);
void QColorDialog_setStandardColor(int index, QColor* color);
void QColorDialog_currentColorChanged(QColorDialog* self, QColor* color);
void QColorDialog_connect_currentColorChanged(QColorDialog* self, intptr_t slot);
void QColorDialog_colorSelected(QColorDialog* self, QColor* color);
void QColorDialog_connect_colorSelected(QColorDialog* self, intptr_t slot);
void QColorDialog_changeEvent(QColorDialog* self, QEvent* event);
void QColorDialog_done(QColorDialog* self, int result);
struct miqt_string QColorDialog_tr2(const char* s, const char* c);
struct miqt_string QColorDialog_tr3(const char* s, const char* c, int n);
void QColorDialog_setOption2(QColorDialog* self, int option, bool on);
QColor* QColorDialog_getColorWithInitial(QColor* initial);
QColor* QColorDialog_getColor2(QColor* initial, QWidget* parent);
QColor* QColorDialog_getColor3(QColor* initial, QWidget* parent, struct miqt_string title);
QColor* QColorDialog_getColor4(QColor* initial, QWidget* parent, struct miqt_string title, int options);

bool QColorDialog_override_virtual_setVisible(void* self, intptr_t slot);
void QColorDialog_virtualbase_setVisible(void* self, bool visible);
bool QColorDialog_override_virtual_changeEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_changeEvent(void* self, QEvent* event);
bool QColorDialog_override_virtual_done(void* self, intptr_t slot);
void QColorDialog_virtualbase_done(void* self, int result);
bool QColorDialog_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QColorDialog_virtualbase_sizeHint(const void* self);
bool QColorDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QColorDialog_virtualbase_minimumSizeHint(const void* self);
bool QColorDialog_override_virtual_open(void* self, intptr_t slot);
void QColorDialog_virtualbase_open(void* self);
bool QColorDialog_override_virtual_exec(void* self, intptr_t slot);
int QColorDialog_virtualbase_exec(void* self);
bool QColorDialog_override_virtual_accept(void* self, intptr_t slot);
void QColorDialog_virtualbase_accept(void* self);
bool QColorDialog_override_virtual_reject(void* self, intptr_t slot);
void QColorDialog_virtualbase_reject(void* self);
bool QColorDialog_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QColorDialog_override_virtual_closeEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1);
bool QColorDialog_override_virtual_showEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_showEvent(void* self, QShowEvent* param1);
bool QColorDialog_override_virtual_resizeEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QColorDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
bool QColorDialog_override_virtual_eventFilter(void* self, intptr_t slot);
bool QColorDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QColorDialog_override_virtual_devType(void* self, intptr_t slot);
int QColorDialog_virtualbase_devType(const void* self);
bool QColorDialog_override_virtual_heightForWidth(void* self, intptr_t slot);
int QColorDialog_virtualbase_heightForWidth(const void* self, int param1);
bool QColorDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QColorDialog_virtualbase_hasHeightForWidth(const void* self);
bool QColorDialog_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QColorDialog_virtualbase_paintEngine(const void* self);
bool QColorDialog_override_virtual_event(void* self, intptr_t slot);
bool QColorDialog_virtualbase_event(void* self, QEvent* event);
bool QColorDialog_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QColorDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QColorDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QColorDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QColorDialog_override_virtual_wheelEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QColorDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QColorDialog_override_virtual_focusInEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QColorDialog_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QColorDialog_override_virtual_enterEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QColorDialog_override_virtual_leaveEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_leaveEvent(void* self, QEvent* event);
bool QColorDialog_override_virtual_paintEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QColorDialog_override_virtual_moveEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QColorDialog_override_virtual_tabletEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QColorDialog_override_virtual_actionEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QColorDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QColorDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QColorDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QColorDialog_override_virtual_dropEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QColorDialog_override_virtual_hideEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QColorDialog_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QColorDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QColorDialog_override_virtual_metric(void* self, intptr_t slot);
int QColorDialog_virtualbase_metric(const void* self, int param1);
bool QColorDialog_override_virtual_initPainter(void* self, intptr_t slot);
void QColorDialog_virtualbase_initPainter(const void* self, QPainter* painter);
bool QColorDialog_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QColorDialog_virtualbase_redirected(const void* self, QPoint* offset);
bool QColorDialog_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QColorDialog_virtualbase_sharedPainter(const void* self);
bool QColorDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QColorDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QColorDialog_virtualbase_inputMethodQuery(const void* self, int param1);
bool QColorDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QColorDialog_virtualbase_focusNextPrevChild(void* self, bool next);
bool QColorDialog_override_virtual_timerEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QColorDialog_override_virtual_childEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_childEvent(void* self, QChildEvent* event);
bool QColorDialog_override_virtual_customEvent(void* self, intptr_t slot);
void QColorDialog_virtualbase_customEvent(void* self, QEvent* event);
bool QColorDialog_override_virtual_connectNotify(void* self, intptr_t slot);
void QColorDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QColorDialog_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QColorDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QColorDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
void QColorDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QColorDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QColorDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QColorDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QColorDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QColorDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QColorDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QColorDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QColorDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QColorDialog_delete(QColorDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
