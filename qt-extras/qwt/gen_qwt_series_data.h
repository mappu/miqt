#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_SERIES_DATA_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_SERIES_DATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPointF;
class QRectF;
class QwtIntervalSample;
class QwtIntervalSeriesData;
class QwtOHLCSample;
class QwtPoint3D;
class QwtPoint3DSeriesData;
class QwtPointSeriesData;
class QwtSetSample;
class QwtSetSeriesData;
class QwtTradingChartData;
#else
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QwtIntervalSample QwtIntervalSample;
typedef struct QwtIntervalSeriesData QwtIntervalSeriesData;
typedef struct QwtOHLCSample QwtOHLCSample;
typedef struct QwtPoint3D QwtPoint3D;
typedef struct QwtPoint3DSeriesData QwtPoint3DSeriesData;
typedef struct QwtPointSeriesData QwtPointSeriesData;
typedef struct QwtSetSample QwtSetSample;
typedef struct QwtSetSeriesData QwtSetSeriesData;
typedef struct QwtTradingChartData QwtTradingChartData;
#endif

QwtPointSeriesData* QwtPointSeriesData_new();
QwtPointSeriesData* QwtPointSeriesData_new2(struct miqt_array /* of QPointF* */  param1);
QRectF* QwtPointSeriesData_boundingRect(const QwtPointSeriesData* self);

bool QwtPointSeriesData_override_virtual_boundingRect(void* self, intptr_t slot);
QRectF* QwtPointSeriesData_virtualbase_boundingRect(const void* self);

void QwtPointSeriesData_delete(QwtPointSeriesData* self);

QwtPoint3DSeriesData* QwtPoint3DSeriesData_new();
QwtPoint3DSeriesData* QwtPoint3DSeriesData_new2(struct miqt_array /* of QwtPoint3D* */  param1);
QRectF* QwtPoint3DSeriesData_boundingRect(const QwtPoint3DSeriesData* self);

bool QwtPoint3DSeriesData_override_virtual_boundingRect(void* self, intptr_t slot);
QRectF* QwtPoint3DSeriesData_virtualbase_boundingRect(const void* self);

void QwtPoint3DSeriesData_delete(QwtPoint3DSeriesData* self);

QwtIntervalSeriesData* QwtIntervalSeriesData_new();
QwtIntervalSeriesData* QwtIntervalSeriesData_new2(struct miqt_array /* of QwtIntervalSample* */  param1);
QRectF* QwtIntervalSeriesData_boundingRect(const QwtIntervalSeriesData* self);

bool QwtIntervalSeriesData_override_virtual_boundingRect(void* self, intptr_t slot);
QRectF* QwtIntervalSeriesData_virtualbase_boundingRect(const void* self);

void QwtIntervalSeriesData_delete(QwtIntervalSeriesData* self);

QwtSetSeriesData* QwtSetSeriesData_new();
QwtSetSeriesData* QwtSetSeriesData_new2(struct miqt_array /* of QwtSetSample* */  param1);
QRectF* QwtSetSeriesData_boundingRect(const QwtSetSeriesData* self);

bool QwtSetSeriesData_override_virtual_boundingRect(void* self, intptr_t slot);
QRectF* QwtSetSeriesData_virtualbase_boundingRect(const void* self);

void QwtSetSeriesData_delete(QwtSetSeriesData* self);

QwtTradingChartData* QwtTradingChartData_new();
QwtTradingChartData* QwtTradingChartData_new2(struct miqt_array /* of QwtOHLCSample* */  param1);
QRectF* QwtTradingChartData_boundingRect(const QwtTradingChartData* self);

bool QwtTradingChartData_override_virtual_boundingRect(void* self, intptr_t slot);
QRectF* QwtTradingChartData_virtualbase_boundingRect(const void* self);

void QwtTradingChartData_delete(QwtTradingChartData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
