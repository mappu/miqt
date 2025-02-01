#pragma once
#ifndef MIQT_QT6_GEN_QHASHFUNCTIONS_H
#define MIQT_QT6_GEN_QHASHFUNCTIONS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QHashSeed;
#else
typedef struct QHashSeed QHashSeed;
#endif

QHashSeed* QHashSeed_new();
QHashSeed* QHashSeed_new2(size_t d);
QHashSeed* QHashSeed_globalSeed();
void QHashSeed_setDeterministicGlobalSeed();
void QHashSeed_resetRandomGlobalSeed();
void QHashSeed_delete(QHashSeed* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
