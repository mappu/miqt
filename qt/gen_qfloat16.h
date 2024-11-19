#pragma once
#ifndef MIQT_QT_GEN_QFLOAT16_H
#define MIQT_QT_GEN_QFLOAT16_H

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

void qfloat16_new(qfloat16** outptr_qfloat16);
void qfloat16_new2(float f, qfloat16** outptr_qfloat16);
bool qfloat16_IsInf(const qfloat16* self);
bool qfloat16_IsNaN(const qfloat16* self);
bool qfloat16_IsFinite(const qfloat16* self);
int qfloat16_FpClassify(const qfloat16* self);
bool qfloat16_IsNormal(const qfloat16* self);
void qfloat16_Delete(qfloat16* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
