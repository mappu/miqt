#pragma once
#ifndef MIQT_QT6_GEN_QBITMAP_H
#define MIQT_QT6_GEN_QBITMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBitmap;
class QImage;
class QPaintDevice;
class QPaintEngine;
class QPainter;
class QPixmap;
class QPoint;
class QSize;
class QTransform;
class QVariant;
#else
typedef struct QBitmap QBitmap;
typedef struct QImage QImage;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
#endif

QBitmap* QBitmap_new();
QBitmap* QBitmap_new2(QPixmap* param1);
QBitmap* QBitmap_new3(int w, int h);
QBitmap* QBitmap_new4(QSize* param1);
QBitmap* QBitmap_new5(struct miqt_string fileName);
QBitmap* QBitmap_new6(QBitmap* param1);
QBitmap* QBitmap_new7(struct miqt_string fileName, const char* format);
void QBitmap_virtbase(QBitmap* src, QPixmap** outptr_QPixmap);
void QBitmap_operatorAssign(QBitmap* self, QPixmap* param1);
void QBitmap_swap(QBitmap* self, QBitmap* other);
QVariant* QBitmap_ToQVariant(const QBitmap* self);
void QBitmap_clear(QBitmap* self);
QBitmap* QBitmap_fromImage(QImage* image);
QBitmap* QBitmap_fromData(QSize* size, const unsigned char* bits);
QBitmap* QBitmap_fromPixmap(QPixmap* pixmap);
QBitmap* QBitmap_transformed(const QBitmap* self, QTransform* matrix);
void QBitmap_operatorAssignWithQBitmap(QBitmap* self, QBitmap* param1);
QBitmap* QBitmap_fromImage2(QImage* image, int flags);
QBitmap* QBitmap_fromData2(QSize* size, const unsigned char* bits, int monoFormat);

bool QBitmap_override_virtual_devType(void* self, intptr_t slot);
int QBitmap_virtualbase_devType(const void* self);
bool QBitmap_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QBitmap_virtualbase_paintEngine(const void* self);
bool QBitmap_override_virtual_metric(void* self, intptr_t slot);
int QBitmap_virtualbase_metric(const void* self, int param1);
bool QBitmap_override_virtual_initPainter(void* self, intptr_t slot);
void QBitmap_virtualbase_initPainter(const void* self, QPainter* painter);
bool QBitmap_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QBitmap_virtualbase_redirected(const void* self, QPoint* offset);
bool QBitmap_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QBitmap_virtualbase_sharedPainter(const void* self);

void QBitmap_delete(QBitmap* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
