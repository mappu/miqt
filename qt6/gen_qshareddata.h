#ifndef GEN_QSHAREDDATA_H
#define GEN_QSHAREDDATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAdoptSharedDataTag;
class QSharedData;
#else
typedef struct QAdoptSharedDataTag QAdoptSharedDataTag;
typedef struct QSharedData QSharedData;
#endif

QSharedData* QSharedData_new();
QSharedData* QSharedData_new2(QSharedData* param1);
void QSharedData_Delete(QSharedData* self);

QAdoptSharedDataTag* QAdoptSharedDataTag_new();
void QAdoptSharedDataTag_Delete(QAdoptSharedDataTag* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
