#ifndef GEN_QCONTIGUOUSCACHE_H
#define GEN_QCONTIGUOUSCACHE_H

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

QContiguousCacheData* QContiguousCacheData_AllocateData(ptrdiff_t size, ptrdiff_t alignment);
void QContiguousCacheData_FreeData(QContiguousCacheData* data);
void QContiguousCacheData_Delete(QContiguousCacheData* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
