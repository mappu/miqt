#pragma once
#ifndef MIQT_QT_GEN_QRASTERWINDOW_H
#define MIQT_QT_GEN_QRASTERWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAccessibleInterface;
class QChildEvent;
class QEvent;
class QExposeEvent;
class QFocusEvent;
class QHideEvent;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintDeviceWindow;
class QPaintEvent;
class QPainter;
class QPoint;
class QRasterWindow;
class QResizeEvent;
class QShowEvent;
class QSize;
class QSurface;
class QSurfaceFormat;
class QTabletEvent;
class QTimerEvent;
class QTouchEvent;
class QWheelEvent;
class QWindow;
#else
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QExposeEvent QExposeEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintDeviceWindow QPaintDeviceWindow;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRasterWindow QRasterWindow;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTouchEvent QTouchEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWindow QWindow;
#endif

QRasterWindow* QRasterWindow_new();
QRasterWindow* QRasterWindow_new2(QWindow* parent);
void QRasterWindow_virtbase(QRasterWindow* src, QPaintDeviceWindow** outptr_QPaintDeviceWindow);
QMetaObject* QRasterWindow_metaObject(const QRasterWindow* self);
void* QRasterWindow_metacast(QRasterWindow* self, const char* param1);
struct miqt_string QRasterWindow_tr(const char* s);
struct miqt_string QRasterWindow_trUtf8(const char* s);
int QRasterWindow_metric(const QRasterWindow* self, int metric);
QPaintDevice* QRasterWindow_redirected(const QRasterWindow* self, QPoint* param1);
struct miqt_string QRasterWindow_tr2(const char* s, const char* c);
struct miqt_string QRasterWindow_tr3(const char* s, const char* c, int n);
struct miqt_string QRasterWindow_trUtf82(const char* s, const char* c);
struct miqt_string QRasterWindow_trUtf83(const char* s, const char* c, int n);
bool QRasterWindow_override_virtual_metric(void* self, intptr_t slot);
int QRasterWindow_virtualbase_metric(const void* self, int metric);
bool QRasterWindow_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QRasterWindow_virtualbase_redirected(const void* self, QPoint* param1);
bool QRasterWindow_override_virtual_paintEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QRasterWindow_override_virtual_exposeEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_exposeEvent(void* self, QExposeEvent* param1);
bool QRasterWindow_override_virtual_event(void* self, intptr_t slot);
bool QRasterWindow_virtualbase_event(void* self, QEvent* event);
bool QRasterWindow_override_virtual_surfaceType(void* self, intptr_t slot);
int QRasterWindow_virtualbase_surfaceType(const void* self);
bool QRasterWindow_override_virtual_format(void* self, intptr_t slot);
QSurfaceFormat* QRasterWindow_virtualbase_format(const void* self);
bool QRasterWindow_override_virtual_size(void* self, intptr_t slot);
QSize* QRasterWindow_virtualbase_size(const void* self);
bool QRasterWindow_override_virtual_accessibleRoot(void* self, intptr_t slot);
QAccessibleInterface* QRasterWindow_virtualbase_accessibleRoot(const void* self);
bool QRasterWindow_override_virtual_focusObject(void* self, intptr_t slot);
QObject* QRasterWindow_virtualbase_focusObject(const void* self);
bool QRasterWindow_override_virtual_resizeEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QRasterWindow_override_virtual_moveEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_moveEvent(void* self, QMoveEvent* param1);
bool QRasterWindow_override_virtual_focusInEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_focusInEvent(void* self, QFocusEvent* param1);
bool QRasterWindow_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_focusOutEvent(void* self, QFocusEvent* param1);
bool QRasterWindow_override_virtual_showEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_showEvent(void* self, QShowEvent* param1);
bool QRasterWindow_override_virtual_hideEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_hideEvent(void* self, QHideEvent* param1);
bool QRasterWindow_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QRasterWindow_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1);
bool QRasterWindow_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QRasterWindow_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
bool QRasterWindow_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1);
bool QRasterWindow_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QRasterWindow_override_virtual_wheelEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
bool QRasterWindow_override_virtual_touchEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_touchEvent(void* self, QTouchEvent* param1);
bool QRasterWindow_override_virtual_tabletEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_tabletEvent(void* self, QTabletEvent* param1);
bool QRasterWindow_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QRasterWindow_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QRasterWindow_override_virtual_eventFilter(void* self, intptr_t slot);
bool QRasterWindow_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QRasterWindow_override_virtual_timerEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QRasterWindow_override_virtual_childEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_childEvent(void* self, QChildEvent* event);
bool QRasterWindow_override_virtual_customEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_customEvent(void* self, QEvent* event);
bool QRasterWindow_override_virtual_connectNotify(void* self, intptr_t slot);
void QRasterWindow_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QRasterWindow_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QRasterWindow_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QRasterWindow_override_virtual_devType(void* self, intptr_t slot);
int QRasterWindow_virtualbase_devType(const void* self);
bool QRasterWindow_override_virtual_initPainter(void* self, intptr_t slot);
void QRasterWindow_virtualbase_initPainter(const void* self, QPainter* painter);
bool QRasterWindow_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QRasterWindow_virtualbase_sharedPainter(const void* self);
QObject* QRasterWindow_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QRasterWindow_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QRasterWindow_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QRasterWindow_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QRasterWindow_delete(QRasterWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
