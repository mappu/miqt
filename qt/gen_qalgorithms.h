#pragma once
#ifndef MIQT_QT_GEN_QALGORITHMS_H
#define MIQT_QT_GEN_QALGORITHMS_H

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

unsigned int miqt_QPopulationCountWithQuint32(unsigned int v);
unsigned int miqt_QPopulationCountWithQuint8(unsigned char v);
unsigned int miqt_QPopulationCountWithQuint16(unsigned short v);
unsigned int miqt_QPopulationCountWithQuint64(unsigned long long v);
unsigned int miqt_QPopulationCountWithUnsignedlong(unsigned long v);
unsigned int miqt_QCountTrailingZeroBitsWithQuint32(unsigned int v);
unsigned int miqt_QCountTrailingZeroBitsWithQuint8(unsigned char v);
unsigned int miqt_QCountTrailingZeroBitsWithQuint16(unsigned short v);
unsigned int miqt_QCountTrailingZeroBitsWithQuint64(unsigned long long v);
unsigned int miqt_QCountTrailingZeroBitsWithUnsignedlong(unsigned long v);
unsigned int miqt_QCountLeadingZeroBitsWithQuint32(unsigned int v);
unsigned int miqt_QCountLeadingZeroBitsWithQuint8(unsigned char v);
unsigned int miqt_QCountLeadingZeroBitsWithQuint16(unsigned short v);
unsigned int miqt_QCountLeadingZeroBitsWithQuint64(unsigned long long v);
unsigned int miqt_QCountLeadingZeroBitsWithUnsignedlong(unsigned long v);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
