#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_LEGEND_LABEL_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_LEGEND_LABEL_H

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
class QPixmap;
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
class QwtLegendData;
class QwtLegendLabel;
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
typedef struct QPixmap QPixmap;
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
typedef struct QwtLegendData QwtLegendData;
typedef struct QwtLegendLabel QwtLegendLabel;
typedef struct QwtText QwtText;
typedef struct QwtTextLabel QwtTextLabel;
#endif

QwtLegendLabel* QwtLegendLabel_new(QWidget* parent);
QwtLegendLabel* QwtLegendLabel_new2();
void QwtLegendLabel_virtbase(QwtLegendLabel* src, QwtTextLabel** outptr_QwtTextLabel);
QMetaObject* QwtLegendLabel_metaObject(const QwtLegendLabel* self);
void* QwtLegendLabel_metacast(QwtLegendLabel* self, const char* param1);
struct miqt_string QwtLegendLabel_tr(const char* s);
struct miqt_string QwtLegendLabel_trUtf8(const char* s);
void QwtLegendLabel_setData(QwtLegendLabel* self, QwtLegendData* data);
QwtLegendData* QwtLegendLabel_data(const QwtLegendLabel* self);
void QwtLegendLabel_setItemMode(QwtLegendLabel* self, int itemMode);
int QwtLegendLabel_itemMode(const QwtLegendLabel* self);
void QwtLegendLabel_setSpacing(QwtLegendLabel* self, int spacing);
int QwtLegendLabel_spacing(const QwtLegendLabel* self);
void QwtLegendLabel_setText(QwtLegendLabel* self, QwtText* text);
void QwtLegendLabel_setIcon(QwtLegendLabel* self, QPixmap* icon);
QPixmap* QwtLegendLabel_icon(const QwtLegendLabel* self);
QSize* QwtLegendLabel_sizeHint(const QwtLegendLabel* self);
bool QwtLegendLabel_isChecked(const QwtLegendLabel* self);
void QwtLegendLabel_setChecked(QwtLegendLabel* self, bool on);
void QwtLegendLabel_clicked(QwtLegendLabel* self);
void QwtLegendLabel_connect_clicked(QwtLegendLabel* self, intptr_t slot);
void QwtLegendLabel_pressed(QwtLegendLabel* self);
void QwtLegendLabel_connect_pressed(QwtLegendLabel* self, intptr_t slot);
void QwtLegendLabel_released(QwtLegendLabel* self);
void QwtLegendLabel_connect_released(QwtLegendLabel* self, intptr_t slot);
void QwtLegendLabel_checked(QwtLegendLabel* self, bool param1);
void QwtLegendLabel_connect_checked(QwtLegendLabel* self, intptr_t slot);
void QwtLegendLabel_paintEvent(QwtLegendLabel* self, QPaintEvent* param1);
void QwtLegendLabel_mousePressEvent(QwtLegendLabel* self, QMouseEvent* param1);
void QwtLegendLabel_mouseReleaseEvent(QwtLegendLabel* self, QMouseEvent* param1);
void QwtLegendLabel_keyPressEvent(QwtLegendLabel* self, QKeyEvent* param1);
void QwtLegendLabel_keyReleaseEvent(QwtLegendLabel* self, QKeyEvent* param1);
struct miqt_string QwtLegendLabel_tr2(const char* s, const char* c);
struct miqt_string QwtLegendLabel_tr3(const char* s, const char* c, int n);
struct miqt_string QwtLegendLabel_trUtf82(const char* s, const char* c);
struct miqt_string QwtLegendLabel_trUtf83(const char* s, const char* c, int n);

bool QwtLegendLabel_override_virtual_setText(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_setText(void* self, QwtText* text);
bool QwtLegendLabel_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtLegendLabel_virtualbase_sizeHint(const void* self);
bool QwtLegendLabel_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QwtLegendLabel_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QwtLegendLabel_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
bool QwtLegendLabel_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QwtLegendLabel_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1);
bool QwtLegendLabel_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtLegendLabel_virtualbase_minimumSizeHint(const void* self);
bool QwtLegendLabel_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtLegendLabel_virtualbase_heightForWidth(const void* self, int param1);
bool QwtLegendLabel_override_virtual_drawText(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_drawText(void* self, QPainter* param1, QRectF* param2);
bool QwtLegendLabel_override_virtual_drawContents(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_drawContents(void* self, QPainter* param1);
bool QwtLegendLabel_override_virtual_event(void* self, intptr_t slot);
bool QwtLegendLabel_virtualbase_event(void* self, QEvent* e);
bool QwtLegendLabel_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtLegendLabel_override_virtual_devType(void* self, intptr_t slot);
int QwtLegendLabel_virtualbase_devType(const void* self);
bool QwtLegendLabel_override_virtual_setVisible(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_setVisible(void* self, bool visible);
bool QwtLegendLabel_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtLegendLabel_virtualbase_hasHeightForWidth(const void* self);
bool QwtLegendLabel_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtLegendLabel_virtualbase_paintEngine(const void* self);
bool QwtLegendLabel_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtLegendLabel_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QwtLegendLabel_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QwtLegendLabel_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtLegendLabel_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtLegendLabel_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtLegendLabel_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtLegendLabel_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtLegendLabel_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QwtLegendLabel_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtLegendLabel_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtLegendLabel_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtLegendLabel_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtLegendLabel_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtLegendLabel_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtLegendLabel_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtLegendLabel_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtLegendLabel_override_virtual_showEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtLegendLabel_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtLegendLabel_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtLegendLabel_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtLegendLabel_override_virtual_metric(void* self, intptr_t slot);
int QwtLegendLabel_virtualbase_metric(const void* self, int param1);
bool QwtLegendLabel_override_virtual_initPainter(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtLegendLabel_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtLegendLabel_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtLegendLabel_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtLegendLabel_virtualbase_sharedPainter(const void* self);
bool QwtLegendLabel_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtLegendLabel_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtLegendLabel_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtLegendLabel_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtLegendLabel_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtLegendLabel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtLegendLabel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtLegendLabel_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtLegendLabel_override_virtual_childEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtLegendLabel_override_virtual_customEvent(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_customEvent(void* self, QEvent* event);
bool QwtLegendLabel_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtLegendLabel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtLegendLabel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtLegendLabel_protectedbase_setDown(bool* _dynamic_cast_ok, void* self, bool down);
bool QwtLegendLabel_protectedbase_isDown(bool* _dynamic_cast_ok, const void* self);
void QwtLegendLabel_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QwtLegendLabel_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
void QwtLegendLabel_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtLegendLabel_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtLegendLabel_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtLegendLabel_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtLegendLabel_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtLegendLabel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtLegendLabel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtLegendLabel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtLegendLabel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtLegendLabel_delete(QwtLegendLabel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
