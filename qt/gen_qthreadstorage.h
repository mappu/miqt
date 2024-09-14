#ifndef GEN_QTHREADSTORAGE_H
#define GEN_QTHREADSTORAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QThreadStorageData;
#else
typedef struct QThreadStorageData QThreadStorageData;
#endif

QThreadStorageData* QThreadStorageData_new(QThreadStorageData* param1);
void QThreadStorageData_Delete(QThreadStorageData* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
