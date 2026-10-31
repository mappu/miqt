#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_RASTER_DATA_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_RASTER_DATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRectF;
class QSize;
class QwtInterval;
class QwtRasterData;
#else
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QwtInterval QwtInterval;
typedef struct QwtRasterData QwtRasterData;
#endif

QwtRasterData* QwtRasterData_new();
void QwtRasterData_setInterval(QwtRasterData* self, int param1, QwtInterval* param2);
QwtInterval* QwtRasterData_interval(const QwtRasterData* self, int param1);
struct miqt_qrectf QwtRasterData_pixelHint(const QwtRasterData* self, struct miqt_qrectf param1);
void QwtRasterData_initRaster(QwtRasterData* self, struct miqt_qrectf param1, struct miqt_qsize raster);
void QwtRasterData_discardRaster(QwtRasterData* self);
double QwtRasterData_value(const QwtRasterData* self, double x, double y);

bool QwtRasterData_override_virtual_setInterval(void* self, intptr_t slot);
void QwtRasterData_virtualbase_setInterval(void* self, int param1, QwtInterval* param2);
bool QwtRasterData_override_virtual_pixelHint(void* self, intptr_t slot);
struct miqt_qrectf QwtRasterData_virtualbase_pixelHint(const void* self, struct miqt_qrectf param1);
bool QwtRasterData_override_virtual_initRaster(void* self, intptr_t slot);
void QwtRasterData_virtualbase_initRaster(void* self, struct miqt_qrectf param1, struct miqt_qsize raster);
bool QwtRasterData_override_virtual_discardRaster(void* self, intptr_t slot);
void QwtRasterData_virtualbase_discardRaster(void* self);
bool QwtRasterData_override_virtual_value(void* self, intptr_t slot);
double QwtRasterData_virtualbase_value(const void* self, double x, double y);

void QwtRasterData_delete(QwtRasterData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
