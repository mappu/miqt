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

QAbstractVideoBuffer* QAbstractVideoBuffer_new(int typeVal);
void QAbstractVideoBuffer_Release(QAbstractVideoBuffer* self);
int QAbstractVideoBuffer_HandleType(const QAbstractVideoBuffer* self);
int QAbstractVideoBuffer_MapMode(const QAbstractVideoBuffer* self);
unsigned char* QAbstractVideoBuffer_Map(QAbstractVideoBuffer* self, int mode, int* numBytes, int* bytesPerLine);
void QAbstractVideoBuffer_Unmap(QAbstractVideoBuffer* self);
QVariant* QAbstractVideoBuffer_Handle(const QAbstractVideoBuffer* self);
bool QAbstractVideoBuffer_override_virtual_Release(void* self, intptr_t slot);
void QAbstractVideoBuffer_virtualbase_Release(void* self);
bool QAbstractVideoBuffer_override_virtual_MapMode(void* self, intptr_t slot);
int QAbstractVideoBuffer_virtualbase_MapMode(const void* self);
bool QAbstractVideoBuffer_override_virtual_Map(void* self, intptr_t slot);
unsigned char* QAbstractVideoBuffer_virtualbase_Map(void* self, int mode, int* numBytes, int* bytesPerLine);
bool QAbstractVideoBuffer_override_virtual_Unmap(void* self, intptr_t slot);
void QAbstractVideoBuffer_virtualbase_Unmap(void* self);
bool QAbstractVideoBuffer_override_virtual_Handle(void* self, intptr_t slot);
QVariant* QAbstractVideoBuffer_virtualbase_Handle(const void* self);
void QAbstractVideoBuffer_Delete(QAbstractVideoBuffer* self);

QAbstractPlanarVideoBuffer* QAbstractPlanarVideoBuffer_new(int typeVal);
void QAbstractPlanarVideoBuffer_virtbase(QAbstractPlanarVideoBuffer* src, QAbstractVideoBuffer** outptr_QAbstractVideoBuffer);
unsigned char* QAbstractPlanarVideoBuffer_Map(QAbstractPlanarVideoBuffer* self, int mode, int* numBytes, int* bytesPerLine);
bool QAbstractPlanarVideoBuffer_override_virtual_Map(void* self, intptr_t slot);
unsigned char* QAbstractPlanarVideoBuffer_virtualbase_Map(void* self, int mode, int* numBytes, int* bytesPerLine);
bool QAbstractPlanarVideoBuffer_override_virtual_Release(void* self, intptr_t slot);
void QAbstractPlanarVideoBuffer_virtualbase_Release(void* self);
bool QAbstractPlanarVideoBuffer_override_virtual_MapMode(void* self, intptr_t slot);
int QAbstractPlanarVideoBuffer_virtualbase_MapMode(const void* self);
bool QAbstractPlanarVideoBuffer_override_virtual_Unmap(void* self, intptr_t slot);
void QAbstractPlanarVideoBuffer_virtualbase_Unmap(void* self);
bool QAbstractPlanarVideoBuffer_override_virtual_Handle(void* self, intptr_t slot);
QVariant* QAbstractPlanarVideoBuffer_virtualbase_Handle(const void* self);
void QAbstractPlanarVideoBuffer_Delete(QAbstractPlanarVideoBuffer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
