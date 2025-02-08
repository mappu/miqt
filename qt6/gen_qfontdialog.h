#pragma once
#ifndef MIQT_QT6_GEN_QFONTDIALOG_H
#define MIQT_QT6_GEN_QFONTDIALOG_H

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
class QEnterEvent;
class QEvent;
class QFocusEvent;
class QFont;
class QFontDialog;
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
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFontDialog QFontDialog;
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

QFontDialog* QFontDialog_new(QWidget* parent);
QFontDialog* QFontDialog_new2();
QFontDialog* QFontDialog_new3(QFont* initial);
QFontDialog* QFontDialog_new4(QFont* initial, QWidget* parent);
void QFontDialog_virtbase(QFontDialog* src, QDialog** outptr_QDialog);
QMetaObject* QFontDialog_metaObject(const QFontDialog* self);
void* QFontDialog_metacast(QFontDialog* self, const char* param1);
struct miqt_string QFontDialog_tr(const char* s);
void QFontDialog_setCurrentFont(QFontDialog* self, QFont* font);
QFont* QFontDialog_currentFont(const QFontDialog* self);
QFont* QFontDialog_selectedFont(const QFontDialog* self);
void QFontDialog_setOption(QFontDialog* self, int option);
bool QFontDialog_testOption(const QFontDialog* self, int option);
void QFontDialog_setOptions(QFontDialog* self, int options);
int QFontDialog_options(const QFontDialog* self);
void QFontDialog_setVisible(QFontDialog* self, bool visible);
QFont* QFontDialog_getFont(bool* ok);
QFont* QFontDialog_getFont2(bool* ok, QFont* initial);
void QFontDialog_currentFontChanged(QFontDialog* self, QFont* font);
void QFontDialog_connect_currentFontChanged(QFontDialog* self, intptr_t slot);
void QFontDialog_fontSelected(QFontDialog* self, QFont* font);
void QFontDialog_connect_fontSelected(QFontDialog* self, intptr_t slot);
void QFontDialog_changeEvent(QFontDialog* self, QEvent* event);
void QFontDialog_done(QFontDialog* self, int result);
bool QFontDialog_eventFilter(QFontDialog* self, QObject* object, QEvent* event);
struct miqt_string QFontDialog_tr2(const char* s, const char* c);
struct miqt_string QFontDialog_tr3(const char* s, const char* c, int n);
void QFontDialog_setOption2(QFontDialog* self, int option, bool on);
QFont* QFontDialog_getFont22(bool* ok, QWidget* parent);
QFont* QFontDialog_getFont3(bool* ok, QFont* initial, QWidget* parent);
QFont* QFontDialog_getFont4(bool* ok, QFont* initial, QWidget* parent, struct miqt_string title);
QFont* QFontDialog_getFont5(bool* ok, QFont* initial, QWidget* parent, struct miqt_string title, int options);
bool QFontDialog_override_virtual_setVisible(void* self, intptr_t slot);
void QFontDialog_virtualbase_setVisible(void* self, bool visible);
bool QFontDialog_override_virtual_changeEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_changeEvent(void* self, QEvent* event);
bool QFontDialog_override_virtual_done(void* self, intptr_t slot);
void QFontDialog_virtualbase_done(void* self, int result);
bool QFontDialog_override_virtual_eventFilter(void* self, intptr_t slot);
bool QFontDialog_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);
bool QFontDialog_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QFontDialog_virtualbase_sizeHint(const void* self);
bool QFontDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QFontDialog_virtualbase_minimumSizeHint(const void* self);
bool QFontDialog_override_virtual_open(void* self, intptr_t slot);
void QFontDialog_virtualbase_open(void* self);
bool QFontDialog_override_virtual_exec(void* self, intptr_t slot);
int QFontDialog_virtualbase_exec(void* self);
bool QFontDialog_override_virtual_accept(void* self, intptr_t slot);
void QFontDialog_virtualbase_accept(void* self);
bool QFontDialog_override_virtual_reject(void* self, intptr_t slot);
void QFontDialog_virtualbase_reject(void* self);
bool QFontDialog_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QFontDialog_override_virtual_closeEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1);
bool QFontDialog_override_virtual_showEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_showEvent(void* self, QShowEvent* param1);
bool QFontDialog_override_virtual_resizeEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QFontDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
bool QFontDialog_override_virtual_devType(void* self, intptr_t slot);
int QFontDialog_virtualbase_devType(const void* self);
bool QFontDialog_override_virtual_heightForWidth(void* self, intptr_t slot);
int QFontDialog_virtualbase_heightForWidth(const void* self, int param1);
bool QFontDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QFontDialog_virtualbase_hasHeightForWidth(const void* self);
bool QFontDialog_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QFontDialog_virtualbase_paintEngine(const void* self);
bool QFontDialog_override_virtual_event(void* self, intptr_t slot);
bool QFontDialog_virtualbase_event(void* self, QEvent* event);
bool QFontDialog_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QFontDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QFontDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QFontDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QFontDialog_override_virtual_wheelEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QFontDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QFontDialog_override_virtual_focusInEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QFontDialog_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QFontDialog_override_virtual_enterEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QFontDialog_override_virtual_leaveEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_leaveEvent(void* self, QEvent* event);
bool QFontDialog_override_virtual_paintEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QFontDialog_override_virtual_moveEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QFontDialog_override_virtual_tabletEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QFontDialog_override_virtual_actionEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QFontDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QFontDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QFontDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QFontDialog_override_virtual_dropEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QFontDialog_override_virtual_hideEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QFontDialog_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QFontDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QFontDialog_override_virtual_metric(void* self, intptr_t slot);
int QFontDialog_virtualbase_metric(const void* self, int param1);
bool QFontDialog_override_virtual_initPainter(void* self, intptr_t slot);
void QFontDialog_virtualbase_initPainter(const void* self, QPainter* painter);
bool QFontDialog_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QFontDialog_virtualbase_redirected(const void* self, QPoint* offset);
bool QFontDialog_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QFontDialog_virtualbase_sharedPainter(const void* self);
bool QFontDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QFontDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QFontDialog_virtualbase_inputMethodQuery(const void* self, int param1);
bool QFontDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QFontDialog_virtualbase_focusNextPrevChild(void* self, bool next);
bool QFontDialog_override_virtual_timerEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QFontDialog_override_virtual_childEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_childEvent(void* self, QChildEvent* event);
bool QFontDialog_override_virtual_customEvent(void* self, intptr_t slot);
void QFontDialog_virtualbase_customEvent(void* self, QEvent* event);
bool QFontDialog_override_virtual_connectNotify(void* self, intptr_t slot);
void QFontDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QFontDialog_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QFontDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QFontDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
void QFontDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QFontDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QFontDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QFontDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QFontDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QFontDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QFontDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QFontDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QFontDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QFontDialog_delete(QFontDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
