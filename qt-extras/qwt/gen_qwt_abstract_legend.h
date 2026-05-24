#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_ABSTRACT_LEGEND_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_ABSTRACT_LEGEND_H

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
class QwtAbstractLegend;
class QwtLegendData;
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
typedef struct QwtAbstractLegend QwtAbstractLegend;
typedef struct QwtLegendData QwtLegendData;
#endif

QwtAbstractLegend* QwtAbstractLegend_new(QWidget* parent);
QwtAbstractLegend* QwtAbstractLegend_new2();
void QwtAbstractLegend_virtbase(QwtAbstractLegend* src, QFrame** outptr_QFrame);
QMetaObject* QwtAbstractLegend_metaObject(const QwtAbstractLegend* self);
void* QwtAbstractLegend_metacast(QwtAbstractLegend* self, const char* param1);
struct miqt_string QwtAbstractLegend_tr(const char* s);
struct miqt_string QwtAbstractLegend_trUtf8(const char* s);
void QwtAbstractLegend_renderLegend(const QwtAbstractLegend* self, QPainter* painter, QRectF* rect, bool fillBackground);
bool QwtAbstractLegend_isEmpty(const QwtAbstractLegend* self);
int QwtAbstractLegend_scrollExtent(const QwtAbstractLegend* self, int param1);
void QwtAbstractLegend_updateLegend(QwtAbstractLegend* self, QVariant* itemInfo, struct miqt_array /* of QwtLegendData* */  data);
struct miqt_string QwtAbstractLegend_tr2(const char* s, const char* c);
struct miqt_string QwtAbstractLegend_tr3(const char* s, const char* c, int n);
struct miqt_string QwtAbstractLegend_trUtf82(const char* s, const char* c);
struct miqt_string QwtAbstractLegend_trUtf83(const char* s, const char* c, int n);

bool QwtAbstractLegend_override_virtual_renderLegend(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_renderLegend(const void* self, QPainter* painter, QRectF* rect, bool fillBackground);
bool QwtAbstractLegend_override_virtual_isEmpty(void* self, intptr_t slot);
bool QwtAbstractLegend_virtualbase_isEmpty(const void* self);
bool QwtAbstractLegend_override_virtual_scrollExtent(void* self, intptr_t slot);
int QwtAbstractLegend_virtualbase_scrollExtent(const void* self, int param1);
bool QwtAbstractLegend_override_virtual_updateLegend(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_updateLegend(void* self, QVariant* itemInfo, struct miqt_array /* of QwtLegendData* */  data);
bool QwtAbstractLegend_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtAbstractLegend_virtualbase_sizeHint(const void* self);
bool QwtAbstractLegend_override_virtual_event(void* self, intptr_t slot);
bool QwtAbstractLegend_virtualbase_event(void* self, QEvent* e);
bool QwtAbstractLegend_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QwtAbstractLegend_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtAbstractLegend_override_virtual_devType(void* self, intptr_t slot);
int QwtAbstractLegend_virtualbase_devType(const void* self);
bool QwtAbstractLegend_override_virtual_setVisible(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_setVisible(void* self, bool visible);
bool QwtAbstractLegend_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtAbstractLegend_virtualbase_minimumSizeHint(const void* self);
bool QwtAbstractLegend_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtAbstractLegend_virtualbase_heightForWidth(const void* self, int param1);
bool QwtAbstractLegend_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtAbstractLegend_virtualbase_hasHeightForWidth(const void* self);
bool QwtAbstractLegend_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtAbstractLegend_virtualbase_paintEngine(const void* self);
bool QwtAbstractLegend_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QwtAbstractLegend_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QwtAbstractLegend_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtAbstractLegend_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QwtAbstractLegend_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QwtAbstractLegend_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QwtAbstractLegend_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QwtAbstractLegend_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtAbstractLegend_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtAbstractLegend_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtAbstractLegend_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtAbstractLegend_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtAbstractLegend_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QwtAbstractLegend_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtAbstractLegend_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtAbstractLegend_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtAbstractLegend_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtAbstractLegend_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtAbstractLegend_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtAbstractLegend_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtAbstractLegend_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtAbstractLegend_override_virtual_showEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtAbstractLegend_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtAbstractLegend_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtAbstractLegend_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtAbstractLegend_override_virtual_metric(void* self, intptr_t slot);
int QwtAbstractLegend_virtualbase_metric(const void* self, int param1);
bool QwtAbstractLegend_override_virtual_initPainter(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtAbstractLegend_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtAbstractLegend_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtAbstractLegend_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtAbstractLegend_virtualbase_sharedPainter(const void* self);
bool QwtAbstractLegend_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtAbstractLegend_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtAbstractLegend_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtAbstractLegend_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtAbstractLegend_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtAbstractLegend_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtAbstractLegend_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtAbstractLegend_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtAbstractLegend_override_virtual_childEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtAbstractLegend_override_virtual_customEvent(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_customEvent(void* self, QEvent* event);
bool QwtAbstractLegend_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtAbstractLegend_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtAbstractLegend_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtAbstractLegend_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QwtAbstractLegend_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
void QwtAbstractLegend_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtAbstractLegend_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtAbstractLegend_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtAbstractLegend_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtAbstractLegend_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtAbstractLegend_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtAbstractLegend_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtAbstractLegend_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtAbstractLegend_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtAbstractLegend_delete(QwtAbstractLegend* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
