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

QAbstractVideoBuffer* QAbstractVideoBuffer_new(int type);
void QAbstractVideoBuffer_release(QAbstractVideoBuffer* self);
int QAbstractVideoBuffer_handleType(const QAbstractVideoBuffer* self);
int QAbstractVideoBuffer_mapMode(const QAbstractVideoBuffer* self);
unsigned char* QAbstractVideoBuffer_map(QAbstractVideoBuffer* self, int mode, int* numBytes, int* bytesPerLine);
void QAbstractVideoBuffer_unmap(QAbstractVideoBuffer* self);
QVariant* QAbstractVideoBuffer_handle(const QAbstractVideoBuffer* self);
bool QAbstractVideoBuffer_override_virtual_release(void* self, intptr_t slot);
void QAbstractVideoBuffer_virtualbase_release(void* self);
bool QAbstractVideoBuffer_override_virtual_mapMode(void* self, intptr_t slot);
int QAbstractVideoBuffer_virtualbase_mapMode(const void* self);
bool QAbstractVideoBuffer_override_virtual_map(void* self, intptr_t slot);
unsigned char* QAbstractVideoBuffer_virtualbase_map(void* self, int mode, int* numBytes, int* bytesPerLine);
bool QAbstractVideoBuffer_override_virtual_unmap(void* self, intptr_t slot);
void QAbstractVideoBuffer_virtualbase_unmap(void* self);
bool QAbstractVideoBuffer_override_virtual_handle(void* self, intptr_t slot);
QVariant* QAbstractVideoBuffer_virtualbase_handle(const void* self);
void QAbstractVideoBuffer_delete(QAbstractVideoBuffer* self);

void QAbstractPlanarVideoBuffer_virtbase(QAbstractPlanarVideoBuffer* src, QAbstractVideoBuffer** outptr_QAbstractVideoBuffer);
unsigned char* QAbstractPlanarVideoBuffer_map(QAbstractPlanarVideoBuffer* self, int mode, int* numBytes, int* bytesPerLine);
void QAbstractPlanarVideoBuffer_delete(QAbstractPlanarVideoBuffer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
