#pragma once
#ifndef MIQT_QT_GEN_QARRAYDATA_H
#define MIQT_QT_GEN_QARRAYDATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QArrayData;
#else
typedef struct QArrayData QArrayData;
#endif

void* QArrayData_data(QArrayData* self);
const void* QArrayData_data2(const QArrayData* self);
bool QArrayData_isMutable(const QArrayData* self);
size_t QArrayData_detachCapacity(const QArrayData* self, size_t newSize);
int QArrayData_detachFlags(const QArrayData* self);
int QArrayData_cloneFlags(const QArrayData* self);
QArrayData* QArrayData_allocate(size_t objectSize, size_t alignment, size_t capacity);
QArrayData* QArrayData_reallocateUnaligned(QArrayData* data, size_t objectSize, size_t newCapacity);
void QArrayData_deallocate(QArrayData* data, size_t objectSize, size_t alignment);
QArrayData* QArrayData_sharedNull();
QArrayData* QArrayData_allocate2(size_t objectSize, size_t alignment, size_t capacity, int options);
QArrayData* QArrayData_reallocateUnaligned2(QArrayData* data, size_t objectSize, size_t newCapacity, int newOptions);

void QArrayData_delete(QArrayData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
