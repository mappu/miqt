#pragma once
#ifndef MIQT_QT6_GEN_QRASTERWINDOW_H
#define MIQT_QT6_GEN_QRASTERWINDOW_H

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
class QCloseEvent;
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
typedef struct QCloseEvent QCloseEvent;
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
QMetaObject* QRasterWindow_MetaObject(const QRasterWindow* self);
void* QRasterWindow_Metacast(QRasterWindow* self, const char* param1);
struct miqt_string QRasterWindow_Tr(const char* s);
int QRasterWindow_Metric(const QRasterWindow* self, int metric);
QPaintDevice* QRasterWindow_Redirected(const QRasterWindow* self, QPoint* param1);
struct miqt_string QRasterWindow_Tr2(const char* s, const char* c);
struct miqt_string QRasterWindow_Tr3(const char* s, const char* c, int n);
bool QRasterWindow_override_virtual_Metric(void* self, intptr_t slot);
int QRasterWindow_virtualbase_Metric(const void* self, int metric);
bool QRasterWindow_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QRasterWindow_virtualbase_Redirected(const void* self, QPoint* param1);
bool QRasterWindow_override_virtual_ExposeEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_ExposeEvent(void* self, QExposeEvent* param1);
bool QRasterWindow_override_virtual_PaintEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QRasterWindow_override_virtual_Event(void* self, intptr_t slot);
bool QRasterWindow_virtualbase_Event(void* self, QEvent* event);
bool QRasterWindow_override_virtual_SurfaceType(void* self, intptr_t slot);
int QRasterWindow_virtualbase_SurfaceType(const void* self);
bool QRasterWindow_override_virtual_Format(void* self, intptr_t slot);
QSurfaceFormat* QRasterWindow_virtualbase_Format(const void* self);
bool QRasterWindow_override_virtual_Size(void* self, intptr_t slot);
QSize* QRasterWindow_virtualbase_Size(const void* self);
bool QRasterWindow_override_virtual_AccessibleRoot(void* self, intptr_t slot);
QAccessibleInterface* QRasterWindow_virtualbase_AccessibleRoot(const void* self);
bool QRasterWindow_override_virtual_FocusObject(void* self, intptr_t slot);
QObject* QRasterWindow_virtualbase_FocusObject(const void* self);
bool QRasterWindow_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
bool QRasterWindow_override_virtual_MoveEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_MoveEvent(void* self, QMoveEvent* param1);
bool QRasterWindow_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_FocusInEvent(void* self, QFocusEvent* param1);
bool QRasterWindow_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1);
bool QRasterWindow_override_virtual_ShowEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_ShowEvent(void* self, QShowEvent* param1);
bool QRasterWindow_override_virtual_HideEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_HideEvent(void* self, QHideEvent* param1);
bool QRasterWindow_override_virtual_CloseEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_CloseEvent(void* self, QCloseEvent* param1);
bool QRasterWindow_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
bool QRasterWindow_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* param1);
bool QRasterWindow_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
bool QRasterWindow_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
bool QRasterWindow_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1);
bool QRasterWindow_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
bool QRasterWindow_override_virtual_WheelEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_WheelEvent(void* self, QWheelEvent* param1);
bool QRasterWindow_override_virtual_TouchEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_TouchEvent(void* self, QTouchEvent* param1);
bool QRasterWindow_override_virtual_TabletEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_TabletEvent(void* self, QTabletEvent* param1);
bool QRasterWindow_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QRasterWindow_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QRasterWindow_override_virtual_EventFilter(void* self, intptr_t slot);
bool QRasterWindow_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QRasterWindow_override_virtual_TimerEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QRasterWindow_override_virtual_ChildEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QRasterWindow_override_virtual_CustomEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_CustomEvent(void* self, QEvent* event);
bool QRasterWindow_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QRasterWindow_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QRasterWindow_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QRasterWindow_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
bool QRasterWindow_override_virtual_DevType(void* self, intptr_t slot);
int QRasterWindow_virtualbase_DevType(const void* self);
bool QRasterWindow_override_virtual_InitPainter(void* self, intptr_t slot);
void QRasterWindow_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QRasterWindow_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QRasterWindow_virtualbase_SharedPainter(const void* self);
void QRasterWindow_Delete(QRasterWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
