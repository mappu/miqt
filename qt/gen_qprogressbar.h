#pragma once
#ifndef MIQT_QT_GEN_QPROGRESSBAR_H
#define MIQT_QT_GEN_QPROGRESSBAR_H

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
class QProgressBar;
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
typedef struct QProgressBar QProgressBar;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QProgressBar* QProgressBar_new(QWidget* parent);
QProgressBar* QProgressBar_new2();
void QProgressBar_virtbase(QProgressBar* src, QWidget** outptr_QWidget);
QMetaObject* QProgressBar_metaObject(const QProgressBar* self);
void* QProgressBar_metacast(QProgressBar* self, const char* param1);
struct miqt_string QProgressBar_tr(const char* s);
struct miqt_string QProgressBar_trUtf8(const char* s);
int QProgressBar_minimum(const QProgressBar* self);
int QProgressBar_maximum(const QProgressBar* self);
int QProgressBar_value(const QProgressBar* self);
struct miqt_string QProgressBar_text(const QProgressBar* self);
void QProgressBar_setTextVisible(QProgressBar* self, bool visible);
bool QProgressBar_isTextVisible(const QProgressBar* self);
int QProgressBar_alignment(const QProgressBar* self);
void QProgressBar_setAlignment(QProgressBar* self, int alignment);
QSize* QProgressBar_sizeHint(const QProgressBar* self);
QSize* QProgressBar_minimumSizeHint(const QProgressBar* self);
int QProgressBar_orientation(const QProgressBar* self);
void QProgressBar_setInvertedAppearance(QProgressBar* self, bool invert);
bool QProgressBar_invertedAppearance(const QProgressBar* self);
void QProgressBar_setTextDirection(QProgressBar* self, int textDirection);
int QProgressBar_textDirection(const QProgressBar* self);
void QProgressBar_setFormat(QProgressBar* self, struct miqt_string format);
void QProgressBar_resetFormat(QProgressBar* self);
struct miqt_string QProgressBar_format(const QProgressBar* self);
void QProgressBar_reset(QProgressBar* self);
void QProgressBar_setRange(QProgressBar* self, int minimum, int maximum);
void QProgressBar_setMinimum(QProgressBar* self, int minimum);
void QProgressBar_setMaximum(QProgressBar* self, int maximum);
void QProgressBar_setValue(QProgressBar* self, int value);
void QProgressBar_setOrientation(QProgressBar* self, int orientation);
void QProgressBar_valueChanged(QProgressBar* self, int value);
void QProgressBar_connect_valueChanged(QProgressBar* self, intptr_t slot);
bool QProgressBar_event(QProgressBar* self, QEvent* e);
void QProgressBar_paintEvent(QProgressBar* self, QPaintEvent* param1);
struct miqt_string QProgressBar_tr2(const char* s, const char* c);
struct miqt_string QProgressBar_tr3(const char* s, const char* c, int n);
struct miqt_string QProgressBar_trUtf82(const char* s, const char* c);
struct miqt_string QProgressBar_trUtf83(const char* s, const char* c, int n);
bool QProgressBar_override_virtual_text(void* self, intptr_t slot);
struct miqt_string QProgressBar_virtualbase_text(const void* self);
bool QProgressBar_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QProgressBar_virtualbase_sizeHint(const void* self);
bool QProgressBar_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QProgressBar_virtualbase_minimumSizeHint(const void* self);
bool QProgressBar_override_virtual_event(void* self, intptr_t slot);
bool QProgressBar_virtualbase_event(void* self, QEvent* e);
bool QProgressBar_override_virtual_paintEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QProgressBar_override_virtual_devType(void* self, intptr_t slot);
int QProgressBar_virtualbase_devType(const void* self);
bool QProgressBar_override_virtual_setVisible(void* self, intptr_t slot);
void QProgressBar_virtualbase_setVisible(void* self, bool visible);
bool QProgressBar_override_virtual_heightForWidth(void* self, intptr_t slot);
int QProgressBar_virtualbase_heightForWidth(const void* self, int param1);
bool QProgressBar_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QProgressBar_virtualbase_hasHeightForWidth(const void* self);
bool QProgressBar_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QProgressBar_virtualbase_paintEngine(const void* self);
bool QProgressBar_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QProgressBar_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QProgressBar_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QProgressBar_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QProgressBar_override_virtual_wheelEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QProgressBar_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QProgressBar_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QProgressBar_override_virtual_focusInEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QProgressBar_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QProgressBar_override_virtual_enterEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_enterEvent(void* self, QEvent* event);
bool QProgressBar_override_virtual_leaveEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_leaveEvent(void* self, QEvent* event);
bool QProgressBar_override_virtual_moveEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QProgressBar_override_virtual_resizeEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QProgressBar_override_virtual_closeEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QProgressBar_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QProgressBar_override_virtual_tabletEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QProgressBar_override_virtual_actionEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QProgressBar_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QProgressBar_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QProgressBar_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QProgressBar_override_virtual_dropEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QProgressBar_override_virtual_showEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_showEvent(void* self, QShowEvent* event);
bool QProgressBar_override_virtual_hideEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QProgressBar_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QProgressBar_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QProgressBar_override_virtual_changeEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_changeEvent(void* self, QEvent* param1);
bool QProgressBar_override_virtual_metric(void* self, intptr_t slot);
int QProgressBar_virtualbase_metric(const void* self, int param1);
bool QProgressBar_override_virtual_initPainter(void* self, intptr_t slot);
void QProgressBar_virtualbase_initPainter(const void* self, QPainter* painter);
bool QProgressBar_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QProgressBar_virtualbase_redirected(const void* self, QPoint* offset);
bool QProgressBar_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QProgressBar_virtualbase_sharedPainter(const void* self);
bool QProgressBar_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QProgressBar_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QProgressBar_virtualbase_inputMethodQuery(const void* self, int param1);
bool QProgressBar_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QProgressBar_virtualbase_focusNextPrevChild(void* self, bool next);
bool QProgressBar_override_virtual_eventFilter(void* self, intptr_t slot);
bool QProgressBar_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QProgressBar_override_virtual_timerEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QProgressBar_override_virtual_childEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_childEvent(void* self, QChildEvent* event);
bool QProgressBar_override_virtual_customEvent(void* self, intptr_t slot);
void QProgressBar_virtualbase_customEvent(void* self, QEvent* event);
bool QProgressBar_override_virtual_connectNotify(void* self, intptr_t slot);
void QProgressBar_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QProgressBar_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QProgressBar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QProgressBar_delete(QProgressBar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
