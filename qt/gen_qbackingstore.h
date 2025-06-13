#pragma once
#ifndef MIQT_QT_GEN_QBACKINGSTORE_H
#define MIQT_QT_GEN_QBACKINGSTORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBackingStore;
class QPaintDevice;
class QPoint;
class QRegion;
class QSize;
class QWindow;
#else
typedef struct QBackingStore QBackingStore;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPoint QPoint;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QWindow QWindow;
#endif

QBackingStore* QBackingStore_new(QWindow* window);
QWindow* QBackingStore_window(const QBackingStore* self);
QPaintDevice* QBackingStore_paintDevice(QBackingStore* self);
void QBackingStore_flush(QBackingStore* self, QRegion* region);
void QBackingStore_resize(QBackingStore* self, QSize* size);
QSize* QBackingStore_size(const QBackingStore* self);
bool QBackingStore_scroll(QBackingStore* self, QRegion* area, int dx, int dy);
void QBackingStore_beginPaint(QBackingStore* self, QRegion* param1);
void QBackingStore_endPaint(QBackingStore* self);
void QBackingStore_setStaticContents(QBackingStore* self, QRegion* region);
QRegion* QBackingStore_staticContents(const QBackingStore* self);
bool QBackingStore_hasStaticContents(const QBackingStore* self);
void QBackingStore_flush2(QBackingStore* self, QRegion* region, QWindow* window);
void QBackingStore_flush3(QBackingStore* self, QRegion* region, QWindow* window, QPoint* offset);

void QBackingStore_delete(QBackingStore* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
