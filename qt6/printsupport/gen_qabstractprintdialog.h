#pragma once
#ifndef MIQT_QT6_PRINTSUPPORT_GEN_QABSTRACTPRINTDIALOG_H
#define MIQT_QT6_PRINTSUPPORT_GEN_QABSTRACTPRINTDIALOG_H

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

QAbstractPrintDialog* QAbstractPrintDialog_new(QPrinter* printer);
QAbstractPrintDialog* QAbstractPrintDialog_new2(QPrinter* printer, QWidget* parent);
void QAbstractPrintDialog_virtbase(QAbstractPrintDialog* src, QDialog** outptr_QDialog);
QMetaObject* QAbstractPrintDialog_metaObject(const QAbstractPrintDialog* self);
void* QAbstractPrintDialog_metacast(QAbstractPrintDialog* self, const char* param1);
struct miqt_string QAbstractPrintDialog_tr(const char* s);
void QAbstractPrintDialog_setOptionTabs(QAbstractPrintDialog* self, struct miqt_array /* of QWidget* */  tabs);
void QAbstractPrintDialog_setPrintRange(QAbstractPrintDialog* self, int range);
int QAbstractPrintDialog_printRange(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_setMinMax(QAbstractPrintDialog* self, int min, int max);
int QAbstractPrintDialog_minPage(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_maxPage(const QAbstractPrintDialog* self);
void QAbstractPrintDialog_setFromTo(QAbstractPrintDialog* self, int fromPage, int toPage);
int QAbstractPrintDialog_fromPage(const QAbstractPrintDialog* self);
int QAbstractPrintDialog_toPage(const QAbstractPrintDialog* self);
QPrinter* QAbstractPrintDialog_printer(const QAbstractPrintDialog* self);
struct miqt_string QAbstractPrintDialog_tr2(const char* s, const char* c);
struct miqt_string QAbstractPrintDialog_tr3(const char* s, const char* c, int n);

bool QAbstractPrintDialog_override_virtual_setVisible(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_setVisible(void* self, bool visible);
bool QAbstractPrintDialog_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QAbstractPrintDialog_virtualbase_sizeHint(const void* self);
bool QAbstractPrintDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QAbstractPrintDialog_virtualbase_minimumSizeHint(const void* self);
bool QAbstractPrintDialog_override_virtual_open(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_open(void* self);
bool QAbstractPrintDialog_override_virtual_exec(void* self, intptr_t slot);
int QAbstractPrintDialog_virtualbase_exec(void* self);
bool QAbstractPrintDialog_override_virtual_done(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_done(void* self, int param1);
bool QAbstractPrintDialog_override_virtual_accept(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_accept(void* self);
bool QAbstractPrintDialog_override_virtual_reject(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_reject(void* self);
bool QAbstractPrintDialog_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QAbstractPrintDialog_override_virtual_closeEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1);
bool QAbstractPrintDialog_override_virtual_showEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_showEvent(void* self, QShowEvent* param1);
bool QAbstractPrintDialog_override_virtual_resizeEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QAbstractPrintDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
bool QAbstractPrintDialog_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAbstractPrintDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QAbstractPrintDialog_override_virtual_devType(void* self, intptr_t slot);
int QAbstractPrintDialog_virtualbase_devType(const void* self);
bool QAbstractPrintDialog_override_virtual_heightForWidth(void* self, intptr_t slot);
int QAbstractPrintDialog_virtualbase_heightForWidth(const void* self, int param1);
bool QAbstractPrintDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QAbstractPrintDialog_virtualbase_hasHeightForWidth(const void* self);
bool QAbstractPrintDialog_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QAbstractPrintDialog_virtualbase_paintEngine(const void* self);
bool QAbstractPrintDialog_override_virtual_event(void* self, intptr_t slot);
bool QAbstractPrintDialog_virtualbase_event(void* self, QEvent* event);
bool QAbstractPrintDialog_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QAbstractPrintDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QAbstractPrintDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QAbstractPrintDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QAbstractPrintDialog_override_virtual_wheelEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QAbstractPrintDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QAbstractPrintDialog_override_virtual_focusInEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QAbstractPrintDialog_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QAbstractPrintDialog_override_virtual_enterEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QAbstractPrintDialog_override_virtual_leaveEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_leaveEvent(void* self, QEvent* event);
bool QAbstractPrintDialog_override_virtual_paintEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QAbstractPrintDialog_override_virtual_moveEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QAbstractPrintDialog_override_virtual_tabletEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QAbstractPrintDialog_override_virtual_actionEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QAbstractPrintDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QAbstractPrintDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QAbstractPrintDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QAbstractPrintDialog_override_virtual_dropEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QAbstractPrintDialog_override_virtual_hideEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QAbstractPrintDialog_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QAbstractPrintDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QAbstractPrintDialog_override_virtual_changeEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_changeEvent(void* self, QEvent* param1);
bool QAbstractPrintDialog_override_virtual_metric(void* self, intptr_t slot);
int QAbstractPrintDialog_virtualbase_metric(const void* self, int param1);
bool QAbstractPrintDialog_override_virtual_initPainter(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_initPainter(const void* self, QPainter* painter);
bool QAbstractPrintDialog_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QAbstractPrintDialog_virtualbase_redirected(const void* self, QPoint* offset);
bool QAbstractPrintDialog_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QAbstractPrintDialog_virtualbase_sharedPainter(const void* self);
bool QAbstractPrintDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QAbstractPrintDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QAbstractPrintDialog_virtualbase_inputMethodQuery(const void* self, int param1);
bool QAbstractPrintDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QAbstractPrintDialog_virtualbase_focusNextPrevChild(void* self, bool next);
bool QAbstractPrintDialog_override_virtual_timerEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAbstractPrintDialog_override_virtual_childEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAbstractPrintDialog_override_virtual_customEvent(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_customEvent(void* self, QEvent* event);
bool QAbstractPrintDialog_override_virtual_connectNotify(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAbstractPrintDialog_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAbstractPrintDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QAbstractPrintDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
void QAbstractPrintDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QAbstractPrintDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QAbstractPrintDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QAbstractPrintDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QAbstractPrintDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QAbstractPrintDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAbstractPrintDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAbstractPrintDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAbstractPrintDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAbstractPrintDialog_delete(QAbstractPrintDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
