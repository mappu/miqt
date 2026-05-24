#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_LEGEND_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_LEGEND_H

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
class QScrollBar;
class QShowEvent;
class QSize;
class QStyleOptionFrame;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
class QwtAbstractLegend;
class QwtLegend;
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
typedef struct QScrollBar QScrollBar;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtAbstractLegend QwtAbstractLegend;
typedef struct QwtLegend QwtLegend;
typedef struct QwtLegendData QwtLegendData;
#endif

QwtLegend* QwtLegend_new(QWidget* parent);
QwtLegend* QwtLegend_new2();
void QwtLegend_virtbase(QwtLegend* src, QwtAbstractLegend** outptr_QwtAbstractLegend);
QMetaObject* QwtLegend_metaObject(const QwtLegend* self);
void* QwtLegend_metacast(QwtLegend* self, const char* param1);
struct miqt_string QwtLegend_tr(const char* s);
struct miqt_string QwtLegend_trUtf8(const char* s);
void QwtLegend_setMaxColumns(QwtLegend* self, unsigned int numColums);
unsigned int QwtLegend_maxColumns(const QwtLegend* self);
void QwtLegend_setDefaultItemMode(QwtLegend* self, int defaultItemMode);
int QwtLegend_defaultItemMode(const QwtLegend* self);
QWidget* QwtLegend_contentsWidget(QwtLegend* self);
QWidget* QwtLegend_contentsWidget2(const QwtLegend* self);
QWidget* QwtLegend_legendWidget(const QwtLegend* self, QVariant* param1);
struct miqt_array /* of QWidget* */  QwtLegend_legendWidgets(const QwtLegend* self, QVariant* param1);
QVariant* QwtLegend_itemInfo(const QwtLegend* self, QWidget* param1);
bool QwtLegend_eventFilter(QwtLegend* self, QObject* param1, QEvent* param2);
QSize* QwtLegend_sizeHint(const QwtLegend* self);
int QwtLegend_heightForWidth(const QwtLegend* self, int width);
QScrollBar* QwtLegend_horizontalScrollBar(const QwtLegend* self);
QScrollBar* QwtLegend_verticalScrollBar(const QwtLegend* self);
void QwtLegend_renderLegend(const QwtLegend* self, QPainter* param1, QRectF* param2, bool fillBackground);
void QwtLegend_renderItem(const QwtLegend* self, QPainter* param1, QWidget* param2, QRectF* param3, bool fillBackground);
bool QwtLegend_isEmpty(const QwtLegend* self);
int QwtLegend_scrollExtent(const QwtLegend* self, int param1);
void QwtLegend_clicked(QwtLegend* self, QVariant* itemInfo, int index);
void QwtLegend_connect_clicked(QwtLegend* self, intptr_t slot);
void QwtLegend_checked(QwtLegend* self, QVariant* itemInfo, bool on, int index);
void QwtLegend_connect_checked(QwtLegend* self, intptr_t slot);
void QwtLegend_updateLegend(QwtLegend* self, QVariant* param1, struct miqt_array /* of QwtLegendData* */  param2);
QWidget* QwtLegend_createWidget(const QwtLegend* self, QwtLegendData* param1);
void QwtLegend_updateWidget(QwtLegend* self, QWidget* widget, QwtLegendData* param2);
struct miqt_string QwtLegend_tr2(const char* s, const char* c);
struct miqt_string QwtLegend_tr3(const char* s, const char* c, int n);
struct miqt_string QwtLegend_trUtf82(const char* s, const char* c);
struct miqt_string QwtLegend_trUtf83(const char* s, const char* c, int n);

bool QwtLegend_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtLegend_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QwtLegend_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtLegend_virtualbase_sizeHint(const void* self);
bool QwtLegend_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtLegend_virtualbase_heightForWidth(const void* self, int width);
bool QwtLegend_override_virtual_renderLegend(void* self, intptr_t slot);
void QwtLegend_virtualbase_renderLegend(const void* self, QPainter* param1, QRectF* param2, bool fillBackground);
bool QwtLegend_override_virtual_renderItem(void* self, intptr_t slot);
void QwtLegend_virtualbase_renderItem(const void* self, QPainter* param1, QWidget* param2, QRectF* param3, bool fillBackground);
bool QwtLegend_override_virtual_isEmpty(void* self, intptr_t slot);
bool QwtLegend_virtualbase_isEmpty(const void* self);
bool QwtLegend_override_virtual_scrollExtent(void* self, intptr_t slot);
int QwtLegend_virtualbase_scrollExtent(const void* self, int param1);
bool QwtLegend_override_virtual_updateLegend(void* self, intptr_t slot);
void QwtLegend_virtualbase_updateLegend(void* self, QVariant* param1, struct miqt_array /* of QwtLegendData* */  param2);
bool QwtLegend_override_virtual_createWidget(void* self, intptr_t slot);
QWidget* QwtLegend_virtualbase_createWidget(const void* self, QwtLegendData* param1);
bool QwtLegend_override_virtual_updateWidget(void* self, intptr_t slot);
void QwtLegend_virtualbase_updateWidget(void* self, QWidget* widget, QwtLegendData* param2);
bool QwtLegend_override_virtual_event(void* self, intptr_t slot);
bool QwtLegend_virtualbase_event(void* self, QEvent* e);
bool QwtLegend_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QwtLegend_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtLegend_override_virtual_devType(void* self, intptr_t slot);
int QwtLegend_virtualbase_devType(const void* self);
bool QwtLegend_override_virtual_setVisible(void* self, intptr_t slot);
void QwtLegend_virtualbase_setVisible(void* self, bool visible);
bool QwtLegend_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtLegend_virtualbase_minimumSizeHint(const void* self);
bool QwtLegend_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtLegend_virtualbase_hasHeightForWidth(const void* self);
bool QwtLegend_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtLegend_virtualbase_paintEngine(const void* self);
bool QwtLegend_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QwtLegend_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QwtLegend_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtLegend_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QwtLegend_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QwtLegend_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QwtLegend_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QwtLegend_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtLegend_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtLegend_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtLegend_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtLegend_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtLegend_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QwtLegend_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtLegend_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtLegend_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtLegend_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtLegend_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtLegend_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtLegend_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtLegend_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtLegend_override_virtual_showEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtLegend_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtLegend_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtLegend_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtLegend_override_virtual_metric(void* self, intptr_t slot);
int QwtLegend_virtualbase_metric(const void* self, int param1);
bool QwtLegend_override_virtual_initPainter(void* self, intptr_t slot);
void QwtLegend_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtLegend_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtLegend_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtLegend_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtLegend_virtualbase_sharedPainter(const void* self);
bool QwtLegend_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtLegend_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtLegend_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtLegend_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtLegend_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtLegend_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtLegend_override_virtual_childEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtLegend_override_virtual_customEvent(void* self, intptr_t slot);
void QwtLegend_virtualbase_customEvent(void* self, QEvent* event);
bool QwtLegend_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtLegend_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtLegend_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtLegend_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtLegend_protectedbase_itemClicked(bool* _dynamic_cast_ok, void* self);
void QwtLegend_protectedbase_itemChecked(bool* _dynamic_cast_ok, void* self, bool param1);
void QwtLegend_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QwtLegend_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
void QwtLegend_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtLegend_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtLegend_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtLegend_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtLegend_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtLegend_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtLegend_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtLegend_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtLegend_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtLegend_delete(QwtLegend* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
