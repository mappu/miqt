#pragma once
#ifndef MIQT_QT_GEN_QHASHFUNCTIONS_H
#define MIQT_QT_GEN_QHASHFUNCTIONS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
#endif

int miqt_QGlobalQHashSeed2();
void miqt_QSetGlobalQHashSeedWithNewSeed(int newSeed);
unsigned int miqt_QHashBits2(const void* p, size_t size, unsigned int seed);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
