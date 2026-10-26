#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIO_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
#endif

double miqt_QAudio_ConvertVolume2(double volume, int from, int to);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
