#ifndef GEN_QHASH_H
#define GEN_QHASH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QHashData;
class QHashDummyValue;
#else
typedef struct QHashData QHashData;
typedef struct QHashDummyValue QHashDummyValue;
#endif

bool QHashData_WillGrow(QHashData* self);
void QHashData_HasShrunk(QHashData* self);
void QHashData_Rehash(QHashData* self, int hint);
void QHashData_Delete(QHashData* self);

QHashDummyValue* QHashDummyValue_new();
QHashDummyValue* QHashDummyValue_new2(QHashDummyValue* param1);
void QHashDummyValue_Delete(QHashDummyValue* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
