#pragma once
#ifndef MIQT_QT6_GEN_QCONTIGUOUSCACHE_H
#define MIQT_QT6_GEN_QCONTIGUOUSCACHE_H

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

QContiguousCacheData* QContiguousCacheData_allocateData(ptrdiff_t size, ptrdiff_t alignment);
void QContiguousCacheData_freeData(QContiguousCacheData* data);
void QContiguousCacheData_delete(QContiguousCacheData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
