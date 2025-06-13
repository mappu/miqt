#pragma once
#ifndef MIQT_QT_GEN_QRUBBERBAND_H
#define MIQT_QT_GEN_QRUBBERBAND_H

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
class QRect;
class QResizeEvent;
class QRubberBand;
class QShowEvent;
class QSize;
class QStyleOptionRubberBand;
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
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QRubberBand QRubberBand;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionRubberBand QStyleOptionRubberBand;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QRubberBand* QRubberBand_new(int param1);
QRubberBand* QRubberBand_new2(int param1, QWidget* param2);
void QRubberBand_virtbase(QRubberBand* src, QWidget** outptr_QWidget);
QMetaObject* QRubberBand_metaObject(const QRubberBand* self);
void* QRubberBand_metacast(QRubberBand* self, const char* param1);
struct miqt_string QRubberBand_tr(const char* s);
struct miqt_string QRubberBand_trUtf8(const char* s);
int QRubberBand_shape(const QRubberBand* self);
void QRubberBand_setGeometry(QRubberBand* self, QRect* r);
void QRubberBand_setGeometry2(QRubberBand* self, int x, int y, int w, int h);
void QRubberBand_move(QRubberBand* self, int x, int y);
void QRubberBand_moveWithQPoint(QRubberBand* self, QPoint* p);
void QRubberBand_resize(QRubberBand* self, int w, int h);
void QRubberBand_resizeWithQSize(QRubberBand* self, QSize* s);
bool QRubberBand_event(QRubberBand* self, QEvent* e);
void QRubberBand_paintEvent(QRubberBand* self, QPaintEvent* param1);
void QRubberBand_changeEvent(QRubberBand* self, QEvent* param1);
void QRubberBand_showEvent(QRubberBand* self, QShowEvent* param1);
void QRubberBand_resizeEvent(QRubberBand* self, QResizeEvent* param1);
void QRubberBand_moveEvent(QRubberBand* self, QMoveEvent* param1);
struct miqt_string QRubberBand_tr2(const char* s, const char* c);
struct miqt_string QRubberBand_tr3(const char* s, const char* c, int n);
struct miqt_string QRubberBand_trUtf82(const char* s, const char* c);
struct miqt_string QRubberBand_trUtf83(const char* s, const char* c, int n);

bool QRubberBand_override_virtual_event(void* self, intptr_t slot);
bool QRubberBand_virtualbase_event(void* self, QEvent* e);
bool QRubberBand_override_virtual_paintEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QRubberBand_override_virtual_changeEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_changeEvent(void* self, QEvent* param1);
bool QRubberBand_override_virtual_showEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_showEvent(void* self, QShowEvent* param1);
bool QRubberBand_override_virtual_resizeEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QRubberBand_override_virtual_moveEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_moveEvent(void* self, QMoveEvent* param1);
bool QRubberBand_override_virtual_devType(void* self, intptr_t slot);
int QRubberBand_virtualbase_devType(const void* self);
bool QRubberBand_override_virtual_setVisible(void* self, intptr_t slot);
void QRubberBand_virtualbase_setVisible(void* self, bool visible);
bool QRubberBand_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QRubberBand_virtualbase_sizeHint(const void* self);
bool QRubberBand_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QRubberBand_virtualbase_minimumSizeHint(const void* self);
bool QRubberBand_override_virtual_heightForWidth(void* self, intptr_t slot);
int QRubberBand_virtualbase_heightForWidth(const void* self, int param1);
bool QRubberBand_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QRubberBand_virtualbase_hasHeightForWidth(const void* self);
bool QRubberBand_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QRubberBand_virtualbase_paintEngine(const void* self);
bool QRubberBand_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QRubberBand_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QRubberBand_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QRubberBand_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QRubberBand_override_virtual_wheelEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QRubberBand_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QRubberBand_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QRubberBand_override_virtual_focusInEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QRubberBand_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QRubberBand_override_virtual_enterEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_enterEvent(void* self, QEvent* event);
bool QRubberBand_override_virtual_leaveEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_leaveEvent(void* self, QEvent* event);
bool QRubberBand_override_virtual_closeEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QRubberBand_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QRubberBand_override_virtual_tabletEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QRubberBand_override_virtual_actionEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QRubberBand_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QRubberBand_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QRubberBand_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QRubberBand_override_virtual_dropEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QRubberBand_override_virtual_hideEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QRubberBand_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QRubberBand_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QRubberBand_override_virtual_metric(void* self, intptr_t slot);
int QRubberBand_virtualbase_metric(const void* self, int param1);
bool QRubberBand_override_virtual_initPainter(void* self, intptr_t slot);
void QRubberBand_virtualbase_initPainter(const void* self, QPainter* painter);
bool QRubberBand_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QRubberBand_virtualbase_redirected(const void* self, QPoint* offset);
bool QRubberBand_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QRubberBand_virtualbase_sharedPainter(const void* self);
bool QRubberBand_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QRubberBand_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QRubberBand_virtualbase_inputMethodQuery(const void* self, int param1);
bool QRubberBand_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QRubberBand_virtualbase_focusNextPrevChild(void* self, bool next);
bool QRubberBand_override_virtual_eventFilter(void* self, intptr_t slot);
bool QRubberBand_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QRubberBand_override_virtual_timerEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QRubberBand_override_virtual_childEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_childEvent(void* self, QChildEvent* event);
bool QRubberBand_override_virtual_customEvent(void* self, intptr_t slot);
void QRubberBand_virtualbase_customEvent(void* self, QEvent* event);
bool QRubberBand_override_virtual_connectNotify(void* self, intptr_t slot);
void QRubberBand_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QRubberBand_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QRubberBand_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QRubberBand_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionRubberBand* option);
void QRubberBand_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QRubberBand_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QRubberBand_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QRubberBand_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QRubberBand_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QRubberBand_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QRubberBand_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QRubberBand_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QRubberBand_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QRubberBand_delete(QRubberBand* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
