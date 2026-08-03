#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_TEXT_LABEL_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_TEXT_LABEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

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
class QRect;
class QRectF;
class QResizeEvent;
class QShowEvent;
class QSize;
class QStyleOptionFrame;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
class QwtText;
class QwtTextLabel;
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
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtText QwtText;
typedef struct QwtTextLabel QwtTextLabel;
#endif

QwtTextLabel* QwtTextLabel_new(QWidget* parent);
QwtTextLabel* QwtTextLabel_new2();
QwtTextLabel* QwtTextLabel_new3(QwtText* param1);
QwtTextLabel* QwtTextLabel_new4(QwtText* param1, QWidget* parent);
void QwtTextLabel_virtbase(QwtTextLabel* src, QFrame** outptr_QFrame);
QMetaObject* QwtTextLabel_metaObject(const QwtTextLabel* self);
void* QwtTextLabel_metacast(QwtTextLabel* self, const char* param1);
struct miqt_string QwtTextLabel_tr(const char* s);
struct miqt_string QwtTextLabel_trUtf8(const char* s);
void QwtTextLabel_setPlainText(QwtTextLabel* self, struct miqt_string plainText);
struct miqt_string QwtTextLabel_plainText(const QwtTextLabel* self);
void QwtTextLabel_setText(QwtTextLabel* self, struct miqt_string param1);
void QwtTextLabel_setTextWithText(QwtTextLabel* self, QwtText* text);
void QwtTextLabel_clear(QwtTextLabel* self);
QwtText* QwtTextLabel_text(const QwtTextLabel* self);
int QwtTextLabel_indent(const QwtTextLabel* self);
void QwtTextLabel_setIndent(QwtTextLabel* self, int indent);
int QwtTextLabel_margin(const QwtTextLabel* self);
void QwtTextLabel_setMargin(QwtTextLabel* self, int margin);
QSize* QwtTextLabel_sizeHint(const QwtTextLabel* self);
QSize* QwtTextLabel_minimumSizeHint(const QwtTextLabel* self);
int QwtTextLabel_heightForWidth(const QwtTextLabel* self, int param1);
QRect* QwtTextLabel_textRect(const QwtTextLabel* self);
void QwtTextLabel_drawText(QwtTextLabel* self, QPainter* param1, QRectF* param2);
void QwtTextLabel_paintEvent(QwtTextLabel* self, QPaintEvent* param1);
void QwtTextLabel_drawContents(QwtTextLabel* self, QPainter* param1);
struct miqt_string QwtTextLabel_tr2(const char* s, const char* c);
struct miqt_string QwtTextLabel_tr3(const char* s, const char* c, int n);
struct miqt_string QwtTextLabel_trUtf82(const char* s, const char* c);
struct miqt_string QwtTextLabel_trUtf83(const char* s, const char* c, int n);
void QwtTextLabel_setText2(QwtTextLabel* self, struct miqt_string param1, int textFormat);

bool QwtTextLabel_override_virtual_setTextWithText(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_setTextWithText(void* self, QwtText* text);
bool QwtTextLabel_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtTextLabel_virtualbase_sizeHint(const void* self);
bool QwtTextLabel_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtTextLabel_virtualbase_minimumSizeHint(const void* self);
bool QwtTextLabel_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtTextLabel_virtualbase_heightForWidth(const void* self, int param1);
bool QwtTextLabel_override_virtual_drawText(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_drawText(void* self, QPainter* param1, QRectF* param2);
bool QwtTextLabel_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QwtTextLabel_override_virtual_drawContents(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_drawContents(void* self, QPainter* param1);
bool QwtTextLabel_override_virtual_event(void* self, intptr_t slot);
bool QwtTextLabel_virtualbase_event(void* self, QEvent* e);
bool QwtTextLabel_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtTextLabel_override_virtual_devType(void* self, intptr_t slot);
int QwtTextLabel_virtualbase_devType(const void* self);
bool QwtTextLabel_override_virtual_setVisible(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_setVisible(void* self, bool visible);
bool QwtTextLabel_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtTextLabel_virtualbase_hasHeightForWidth(const void* self);
bool QwtTextLabel_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtTextLabel_virtualbase_paintEngine(const void* self);
bool QwtTextLabel_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QwtTextLabel_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QwtTextLabel_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtTextLabel_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QwtTextLabel_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QwtTextLabel_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QwtTextLabel_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QwtTextLabel_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtTextLabel_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtTextLabel_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtTextLabel_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtTextLabel_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtTextLabel_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QwtTextLabel_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtTextLabel_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtTextLabel_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtTextLabel_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtTextLabel_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtTextLabel_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtTextLabel_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtTextLabel_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtTextLabel_override_virtual_showEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtTextLabel_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtTextLabel_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtTextLabel_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtTextLabel_override_virtual_metric(void* self, intptr_t slot);
int QwtTextLabel_virtualbase_metric(const void* self, int param1);
bool QwtTextLabel_override_virtual_initPainter(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtTextLabel_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtTextLabel_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtTextLabel_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtTextLabel_virtualbase_sharedPainter(const void* self);
bool QwtTextLabel_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtTextLabel_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtTextLabel_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtTextLabel_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtTextLabel_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtTextLabel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtTextLabel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtTextLabel_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtTextLabel_override_virtual_childEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtTextLabel_override_virtual_customEvent(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_customEvent(void* self, QEvent* event);
bool QwtTextLabel_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtTextLabel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtTextLabel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtTextLabel_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QwtTextLabel_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
void QwtTextLabel_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtTextLabel_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtTextLabel_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtTextLabel_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtTextLabel_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtTextLabel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtTextLabel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtTextLabel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtTextLabel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtTextLabel_delete(QwtTextLabel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
