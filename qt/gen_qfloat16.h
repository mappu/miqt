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

qfloat16* qfloat16_new();
qfloat16* qfloat16_new2(float f);
bool qfloat16_isInf(const qfloat16* self);
bool qfloat16_isNaN(const qfloat16* self);
bool qfloat16_isFinite(const qfloat16* self);
int qfloat16_fpClassify(const qfloat16* self);
bool qfloat16_isNormal(const qfloat16* self);
void qfloat16_delete(qfloat16* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
