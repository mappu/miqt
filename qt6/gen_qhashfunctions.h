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

int miqt_QGlobalQHashSeed2();
void miqt_QSetGlobalQHashSeedWithNewSeed(int newSeed);
size_t miqt_QHashBits2(const void* p, size_t size, size_t seed);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
