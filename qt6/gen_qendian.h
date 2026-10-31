#pragma once
#ifndef MIQT_QT6_GEN_QENDIAN_H
#define MIQT_QT6_GEN_QENDIAN_H

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

unsigned long long miqt_QbswapHelperWithSource(unsigned long long source);
unsigned int miqt_QbswapHelper2(unsigned int source);
unsigned short miqt_QbswapHelper3(unsigned short source);
unsigned char miqt_QbswapHelper4(unsigned char source);
float miqt_Qbswap2(float source);
double miqt_Qbswap3(double source);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
