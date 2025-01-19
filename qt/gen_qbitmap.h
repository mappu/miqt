#pragma once
#ifndef MIQT_QT_GEN_QBITMAP_H
#define MIQT_QT_GEN_QBITMAP_H

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
class QMatrix;
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
typedef struct QMatrix QMatrix;
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
QBitmap* QBitmap_new6(QBitmap* other);
QBitmap* QBitmap_new7(struct miqt_string fileName, const char* format);
void QBitmap_virtbase(QBitmap* src, QPixmap** outptr_QPixmap);
void QBitmap_OperatorAssign(QBitmap* self, QBitmap* other);
void QBitmap_OperatorAssignWithQPixmap(QBitmap* self, QPixmap* param1);
void QBitmap_Swap(QBitmap* self, QBitmap* other);
QVariant* QBitmap_ToQVariant(const QBitmap* self);
void QBitmap_Clear(QBitmap* self);
QBitmap* QBitmap_FromImage(QImage* image);
QBitmap* QBitmap_FromData(QSize* size, const unsigned char* bits);
QBitmap* QBitmap_Transformed(const QBitmap* self, QMatrix* param1);
QBitmap* QBitmap_TransformedWithMatrix(const QBitmap* self, QTransform* matrix);
QBitmap* QBitmap_FromImage2(QImage* image, int flags);
QBitmap* QBitmap_FromData3(QSize* size, const unsigned char* bits, int monoFormat);
bool QBitmap_override_virtual_DevType(void* self, intptr_t slot);
int QBitmap_virtualbase_DevType(const void* self);
bool QBitmap_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QBitmap_virtualbase_PaintEngine(const void* self);
bool QBitmap_override_virtual_Metric(void* self, intptr_t slot);
int QBitmap_virtualbase_Metric(const void* self, int param1);
bool QBitmap_override_virtual_InitPainter(void* self, intptr_t slot);
void QBitmap_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QBitmap_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QBitmap_virtualbase_Redirected(const void* self, QPoint* offset);
bool QBitmap_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QBitmap_virtualbase_SharedPainter(const void* self);
void QBitmap_Delete(QBitmap* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
