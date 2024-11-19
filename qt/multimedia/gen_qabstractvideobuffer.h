#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QABSTRACTVIDEOBUFFER_H
#define MIQT_QT_MULTIMEDIA_GEN_QABSTRACTVIDEOBUFFER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractPlanarVideoBuffer;
class QAbstractVideoBuffer;
class QVariant;
#else
typedef struct QAbstractPlanarVideoBuffer QAbstractPlanarVideoBuffer;
typedef struct QAbstractVideoBuffer QAbstractVideoBuffer;
typedef struct QVariant QVariant;
#endif

void QAbstractVideoBuffer_Release(QAbstractVideoBuffer* self);
int QAbstractVideoBuffer_HandleType(const QAbstractVideoBuffer* self);
int QAbstractVideoBuffer_MapMode(const QAbstractVideoBuffer* self);
unsigned char* QAbstractVideoBuffer_Map(QAbstractVideoBuffer* self, int mode, int* numBytes, int* bytesPerLine);
void QAbstractVideoBuffer_Unmap(QAbstractVideoBuffer* self);
QVariant* QAbstractVideoBuffer_Handle(const QAbstractVideoBuffer* self);
void QAbstractVideoBuffer_Delete(QAbstractVideoBuffer* self, bool isSubclass);

unsigned char* QAbstractPlanarVideoBuffer_Map(QAbstractPlanarVideoBuffer* self, int mode, int* numBytes, int* bytesPerLine);
void QAbstractPlanarVideoBuffer_Delete(QAbstractPlanarVideoBuffer* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
