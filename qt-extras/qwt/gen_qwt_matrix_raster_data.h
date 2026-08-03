#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_MATRIX_RASTER_DATA_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_MATRIX_RASTER_DATA_H

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
class QwtMatrixRasterData;
class QwtRasterData;
#else
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QwtInterval QwtInterval;
typedef struct QwtMatrixRasterData QwtMatrixRasterData;
typedef struct QwtRasterData QwtRasterData;
#endif

QwtMatrixRasterData* QwtMatrixRasterData_new();
void QwtMatrixRasterData_virtbase(QwtMatrixRasterData* src, QwtRasterData** outptr_QwtRasterData);
void QwtMatrixRasterData_setResampleMode(QwtMatrixRasterData* self, int mode);
int QwtMatrixRasterData_resampleMode(const QwtMatrixRasterData* self);
void QwtMatrixRasterData_setInterval(QwtMatrixRasterData* self, int param1, QwtInterval* param2);
void QwtMatrixRasterData_setValueMatrix(QwtMatrixRasterData* self, struct miqt_array /* of double */  values, int numColumns);
struct miqt_array /* of double */  QwtMatrixRasterData_valueMatrix(const QwtMatrixRasterData* self);
void QwtMatrixRasterData_setValue(QwtMatrixRasterData* self, int row, int col, double value);
int QwtMatrixRasterData_numColumns(const QwtMatrixRasterData* self);
int QwtMatrixRasterData_numRows(const QwtMatrixRasterData* self);
QRectF* QwtMatrixRasterData_pixelHint(const QwtMatrixRasterData* self, QRectF* param1);
double QwtMatrixRasterData_value(const QwtMatrixRasterData* self, double x, double y);

bool QwtMatrixRasterData_override_virtual_setInterval(void* self, intptr_t slot);
void QwtMatrixRasterData_virtualbase_setInterval(void* self, int param1, QwtInterval* param2);
bool QwtMatrixRasterData_override_virtual_pixelHint(void* self, intptr_t slot);
QRectF* QwtMatrixRasterData_virtualbase_pixelHint(const void* self, QRectF* param1);
bool QwtMatrixRasterData_override_virtual_value(void* self, intptr_t slot);
double QwtMatrixRasterData_virtualbase_value(const void* self, double x, double y);
bool QwtMatrixRasterData_override_virtual_initRaster(void* self, intptr_t slot);
void QwtMatrixRasterData_virtualbase_initRaster(void* self, QRectF* param1, QSize* raster);
bool QwtMatrixRasterData_override_virtual_discardRaster(void* self, intptr_t slot);
void QwtMatrixRasterData_virtualbase_discardRaster(void* self);

void QwtMatrixRasterData_delete(QwtMatrixRasterData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
