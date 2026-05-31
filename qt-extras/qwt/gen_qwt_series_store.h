#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_SERIES_STORE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_SERIES_STORE_H

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
class QwtAbstractSeriesStore;
#else
typedef struct QRectF QRectF;
typedef struct QwtAbstractSeriesStore QwtAbstractSeriesStore;
#endif

void QwtAbstractSeriesStore_dataChanged(QwtAbstractSeriesStore* self);
void QwtAbstractSeriesStore_setRectOfInterest(QwtAbstractSeriesStore* self, QRectF* rectOfInterest);
QRectF* QwtAbstractSeriesStore_dataRect(const QwtAbstractSeriesStore* self);
size_t QwtAbstractSeriesStore_dataSize(const QwtAbstractSeriesStore* self);
void QwtAbstractSeriesStore_operatorAssign(QwtAbstractSeriesStore* self, QwtAbstractSeriesStore* param1);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
