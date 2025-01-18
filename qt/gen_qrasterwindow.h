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
class QEvent;
class QExposeEvent;
class QMetaObject;
class QObject;
class QPaintDevice;
class QPaintDeviceWindow;
class QPaintEvent;
class QPoint;
class QRasterWindow;
class QSurface;
class QWindow;
#else
typedef struct QEvent QEvent;
typedef struct QExposeEvent QExposeEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintDeviceWindow QPaintDeviceWindow;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRasterWindow QRasterWindow;
typedef struct QSurface QSurface;
typedef struct QWindow QWindow;
#endif

QRasterWindow* QRasterWindow_new();
QRasterWindow* QRasterWindow_new2(QWindow* parent);
void QRasterWindow_virtbase(QRasterWindow* src, QPaintDeviceWindow** outptr_QPaintDeviceWindow);
QMetaObject* QRasterWindow_MetaObject(const QRasterWindow* self);
void* QRasterWindow_Metacast(QRasterWindow* self, const char* param1);
struct miqt_string QRasterWindow_Tr(const char* s);
struct miqt_string QRasterWindow_TrUtf8(const char* s);
int QRasterWindow_Metric(const QRasterWindow* self, int metric);
QPaintDevice* QRasterWindow_Redirected(const QRasterWindow* self, QPoint* param1);
struct miqt_string QRasterWindow_Tr2(const char* s, const char* c);
struct miqt_string QRasterWindow_Tr3(const char* s, const char* c, int n);
struct miqt_string QRasterWindow_TrUtf82(const char* s, const char* c);
struct miqt_string QRasterWindow_TrUtf83(const char* s, const char* c, int n);
void QRasterWindow_override_virtual_Metric(void* self, intptr_t slot);
int QRasterWindow_virtualbase_Metric(const void* self, int metric);
void QRasterWindow_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QRasterWindow_virtualbase_Redirected(const void* self, QPoint* param1);
void QRasterWindow_override_virtual_PaintEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QRasterWindow_override_virtual_ExposeEvent(void* self, intptr_t slot);
void QRasterWindow_virtualbase_ExposeEvent(void* self, QExposeEvent* param1);
void QRasterWindow_override_virtual_Event(void* self, intptr_t slot);
bool QRasterWindow_virtualbase_Event(void* self, QEvent* event);
void QRasterWindow_Delete(QRasterWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
