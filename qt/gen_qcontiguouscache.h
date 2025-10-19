#pragma once
#ifndef MIQT_QT_GEN_QCONTIGUOUSCACHE_H
#define MIQT_QT_GEN_QCONTIGUOUSCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QContiguousCacheData;
#else
typedef struct QContiguousCacheData QContiguousCacheData;
#endif

int QContiguousCacheData_alloc(const QContiguousCacheData* self);
void QContiguousCacheData_setAlloc(QContiguousCacheData* self, int alloc);
int QContiguousCacheData_count(const QContiguousCacheData* self);
void QContiguousCacheData_setCount(QContiguousCacheData* self, int count);
int QContiguousCacheData_start(const QContiguousCacheData* self);
void QContiguousCacheData_setStart(QContiguousCacheData* self, int start);
int QContiguousCacheData_offset(const QContiguousCacheData* self);
void QContiguousCacheData_setOffset(QContiguousCacheData* self, int offset);
unsigned int QContiguousCacheData_sharable(const QContiguousCacheData* self);
void QContiguousCacheData_setSharable(QContiguousCacheData* self, unsigned int sharable);
unsigned int QContiguousCacheData_reserved(const QContiguousCacheData* self);
void QContiguousCacheData_setReserved(QContiguousCacheData* self, unsigned int reserved);
QContiguousCacheData* QContiguousCacheData_allocateData(int size, int alignment);
void QContiguousCacheData_freeData(QContiguousCacheData* data);

void QContiguousCacheData_delete(QContiguousCacheData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
