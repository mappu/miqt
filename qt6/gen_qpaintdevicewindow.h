#pragma once
#ifndef MIQT_QT6_GEN_QPAINTDEVICEWINDOW_H
#define MIQT_QT6_GEN_QPAINTDEVICEWINDOW_H

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
class QRect;
class QRegion;
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
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QSurface QSurface;
typedef struct QWindow QWindow;
#endif

void QPaintDeviceWindow_virtbase(QPaintDeviceWindow* src, QWindow** outptr_QWindow, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QPaintDeviceWindow_MetaObject(const QPaintDeviceWindow* self);
void* QPaintDeviceWindow_Metacast(QPaintDeviceWindow* self, const char* param1);
struct miqt_string QPaintDeviceWindow_Tr(const char* s);
void QPaintDeviceWindow_Update(QPaintDeviceWindow* self, QRect* rect);
void QPaintDeviceWindow_UpdateWithRegion(QPaintDeviceWindow* self, QRegion* region);
void QPaintDeviceWindow_Update2(QPaintDeviceWindow* self);
void QPaintDeviceWindow_ExposeEvent(QPaintDeviceWindow* self, QExposeEvent* param1);
void QPaintDeviceWindow_PaintEvent(QPaintDeviceWindow* self, QPaintEvent* event);
int QPaintDeviceWindow_Metric(const QPaintDeviceWindow* self, int metric);
bool QPaintDeviceWindow_Event(QPaintDeviceWindow* self, QEvent* event);
struct miqt_string QPaintDeviceWindow_Tr2(const char* s, const char* c);
struct miqt_string QPaintDeviceWindow_Tr3(const char* s, const char* c, int n);
void QPaintDeviceWindow_Delete(QPaintDeviceWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
