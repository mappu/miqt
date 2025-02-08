#pragma once
#ifndef MIQT_QT6_PRINTSUPPORT_GEN_QPRINTDIALOG_H
#define MIQT_QT6_PRINTSUPPORT_GEN_QPRINTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractPrintDialog;
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
class QPrintDialog;
class QPrinter;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractPrintDialog QAbstractPrintDialog;
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
typedef struct QPrintDialog QPrintDialog;
typedef struct QPrinter QPrinter;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QPrintDialog* QPrintDialog_new(QWidget* parent);
QPrintDialog* QPrintDialog_new2(QPrinter* printer);
QPrintDialog* QPrintDialog_new3();
QPrintDialog* QPrintDialog_new4(QPrinter* printer, QWidget* parent);
void QPrintDialog_virtbase(QPrintDialog* src, QAbstractPrintDialog** outptr_QAbstractPrintDialog);
QMetaObject* QPrintDialog_metaObject(const QPrintDialog* self);
void* QPrintDialog_metacast(QPrintDialog* self, const char* param1);
struct miqt_string QPrintDialog_tr(const char* s);
int QPrintDialog_exec(QPrintDialog* self);
void QPrintDialog_accept(QPrintDialog* self);
void QPrintDialog_done(QPrintDialog* self, int result);
void QPrintDialog_setOption(QPrintDialog* self, int option);
bool QPrintDialog_testOption(const QPrintDialog* self, int option);
void QPrintDialog_setOptions(QPrintDialog* self, int options);
int QPrintDialog_options(const QPrintDialog* self);
void QPrintDialog_setVisible(QPrintDialog* self, bool visible);
void QPrintDialog_accepted(QPrintDialog* self, QPrinter* printer);
void QPrintDialog_connect_accepted(QPrintDialog* self, intptr_t slot);
struct miqt_string QPrintDialog_tr2(const char* s, const char* c);
struct miqt_string QPrintDialog_tr3(const char* s, const char* c, int n);
void QPrintDialog_setOption2(QPrintDialog* self, int option, bool on);
bool QPrintDialog_override_virtual_exec(void* self, intptr_t slot);
int QPrintDialog_virtualbase_exec(void* self);
bool QPrintDialog_override_virtual_accept(void* self, intptr_t slot);
void QPrintDialog_virtualbase_accept(void* self);
bool QPrintDialog_override_virtual_done(void* self, intptr_t slot);
void QPrintDialog_virtualbase_done(void* self, int result);
bool QPrintDialog_override_virtual_setVisible(void* self, intptr_t slot);
void QPrintDialog_virtualbase_setVisible(void* self, bool visible);
bool QPrintDialog_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QPrintDialog_virtualbase_sizeHint(const void* self);
bool QPrintDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QPrintDialog_virtualbase_minimumSizeHint(const void* self);
bool QPrintDialog_override_virtual_open(void* self, intptr_t slot);
void QPrintDialog_virtualbase_open(void* self);
bool QPrintDialog_override_virtual_reject(void* self, intptr_t slot);
void QPrintDialog_virtualbase_reject(void* self);
bool QPrintDialog_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QPrintDialog_override_virtual_closeEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1);
bool QPrintDialog_override_virtual_showEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_showEvent(void* self, QShowEvent* param1);
bool QPrintDialog_override_virtual_resizeEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QPrintDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
bool QPrintDialog_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPrintDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QPrintDialog_override_virtual_devType(void* self, intptr_t slot);
int QPrintDialog_virtualbase_devType(const void* self);
bool QPrintDialog_override_virtual_heightForWidth(void* self, intptr_t slot);
int QPrintDialog_virtualbase_heightForWidth(const void* self, int param1);
bool QPrintDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QPrintDialog_virtualbase_hasHeightForWidth(const void* self);
bool QPrintDialog_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QPrintDialog_virtualbase_paintEngine(const void* self);
bool QPrintDialog_override_virtual_event(void* self, intptr_t slot);
bool QPrintDialog_virtualbase_event(void* self, QEvent* event);
bool QPrintDialog_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QPrintDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QPrintDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QPrintDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QPrintDialog_override_virtual_wheelEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QPrintDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QPrintDialog_override_virtual_focusInEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QPrintDialog_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QPrintDialog_override_virtual_enterEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QPrintDialog_override_virtual_leaveEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_leaveEvent(void* self, QEvent* event);
bool QPrintDialog_override_virtual_paintEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QPrintDialog_override_virtual_moveEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QPrintDialog_override_virtual_tabletEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QPrintDialog_override_virtual_actionEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QPrintDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QPrintDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QPrintDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QPrintDialog_override_virtual_dropEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QPrintDialog_override_virtual_hideEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QPrintDialog_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QPrintDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QPrintDialog_override_virtual_changeEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_changeEvent(void* self, QEvent* param1);
bool QPrintDialog_override_virtual_metric(void* self, intptr_t slot);
int QPrintDialog_virtualbase_metric(const void* self, int param1);
bool QPrintDialog_override_virtual_initPainter(void* self, intptr_t slot);
void QPrintDialog_virtualbase_initPainter(const void* self, QPainter* painter);
bool QPrintDialog_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QPrintDialog_virtualbase_redirected(const void* self, QPoint* offset);
bool QPrintDialog_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QPrintDialog_virtualbase_sharedPainter(const void* self);
bool QPrintDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QPrintDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QPrintDialog_virtualbase_inputMethodQuery(const void* self, int param1);
bool QPrintDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QPrintDialog_virtualbase_focusNextPrevChild(void* self, bool next);
bool QPrintDialog_override_virtual_timerEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPrintDialog_override_virtual_childEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPrintDialog_override_virtual_customEvent(void* self, intptr_t slot);
void QPrintDialog_virtualbase_customEvent(void* self, QEvent* event);
bool QPrintDialog_override_virtual_connectNotify(void* self, intptr_t slot);
void QPrintDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPrintDialog_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPrintDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QPrintDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
void QPrintDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QPrintDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QPrintDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QPrintDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QPrintDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QPrintDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPrintDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPrintDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPrintDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QPrintDialog_delete(QPrintDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
