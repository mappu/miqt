#ifndef GEN_QFLOAT16_H
#define GEN_QFLOAT16_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class qfloat16;
#else
typedef struct qfloat16 qfloat16;
#endif

qfloat16* qfloat16_new();
qfloat16* qfloat16_new2(int param1);
qfloat16* qfloat16_new3(float f);
bool qfloat16_IsInf(const qfloat16* self);
bool qfloat16_IsNaN(const qfloat16* self);
bool qfloat16_IsFinite(const qfloat16* self);
int qfloat16_FpClassify(const qfloat16* self);
bool qfloat16_IsNormal(const qfloat16* self);
void qfloat16_Delete(qfloat16* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
