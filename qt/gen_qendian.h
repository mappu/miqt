#pragma once
#ifndef MIQT_QT_GEN_QENDIAN_H
#define MIQT_QT_GEN_QENDIAN_H

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

float miqt_Qbswap2(float source);
double miqt_Qbswap3(double source);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
