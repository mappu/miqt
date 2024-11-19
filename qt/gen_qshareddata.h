#pragma once
#ifndef MIQT_QT_GEN_QSHAREDDATA_H
#define MIQT_QT_GEN_QSHAREDDATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSharedData;
#else
typedef struct QSharedData QSharedData;
#endif

void QSharedData_new(QSharedData** outptr_QSharedData);
void QSharedData_new2(QSharedData* param1, QSharedData** outptr_QSharedData);
void QSharedData_Delete(QSharedData* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
