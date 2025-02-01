#pragma once
#ifndef MIQT_QT_GEN_QTHREADSTORAGE_H
#define MIQT_QT_GEN_QTHREADSTORAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QThreadStorageData;
#else
typedef struct QThreadStorageData QThreadStorageData;
#endif

QThreadStorageData* QThreadStorageData_new(QThreadStorageData* param1);
void QThreadStorageData_delete(QThreadStorageData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
