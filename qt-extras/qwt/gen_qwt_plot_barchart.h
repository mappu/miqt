#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_BARCHART_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_BARCHART_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QPainter;
class QPointF;
class QRectF;
class QSizeF;
class QwtAbstractSeriesStore;
class QwtColumnRect;
class QwtColumnSymbol;
class QwtGraphic;
class QwtLegendData;
class QwtPlotAbstractBarChart;
class QwtPlotBarChart;
class QwtPlotItem;
class QwtPlotSeriesItem;
class QwtText;
#else
typedef struct QBrush QBrush;
typedef struct QPainter QPainter;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QwtAbstractSeriesStore QwtAbstractSeriesStore;
typedef struct QwtColumnRect QwtColumnRect;
typedef struct QwtColumnSymbol QwtColumnSymbol;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtLegendData QwtLegendData;
typedef struct QwtPlotAbstractBarChart QwtPlotAbstractBarChart;
typedef struct QwtPlotBarChart QwtPlotBarChart;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotSeriesItem QwtPlotSeriesItem;
typedef struct QwtText QwtText;
#endif

QwtPlotBarChart* QwtPlotBarChart_new();
QwtPlotBarChart* QwtPlotBarChart_new2(QwtText* title);
QwtPlotBarChart* QwtPlotBarChart_new3(struct miqt_string title);
void QwtPlotBarChart_virtbase(QwtPlotBarChart* src, QwtPlotAbstractBarChart** outptr_QwtPlotAbstractBarChart);
int QwtPlotBarChart_rtti(const QwtPlotBarChart* self);
void QwtPlotBarChart_setSamples(QwtPlotBarChart* self, struct miqt_array /* of QPointF* */  samples);
void QwtPlotBarChart_setSamplesWithSamples(QwtPlotBarChart* self, struct miqt_array /* of double */  samples);
void QwtPlotBarChart_setSymbol(QwtPlotBarChart* self, QwtColumnSymbol* symbol);
QwtColumnSymbol* QwtPlotBarChart_symbol(const QwtPlotBarChart* self);
void QwtPlotBarChart_setLegendMode(QwtPlotBarChart* self, int legendMode);
int QwtPlotBarChart_legendMode(const QwtPlotBarChart* self);
QRectF* QwtPlotBarChart_boundingRect(const QwtPlotBarChart* self);
QwtColumnSymbol* QwtPlotBarChart_specialSymbol(const QwtPlotBarChart* self, int sampleIndex, QPointF* param2);
QwtText* QwtPlotBarChart_barTitle(const QwtPlotBarChart* self, int sampleIndex);
void QwtPlotBarChart_drawBar(const QwtPlotBarChart* self, QPainter* param1, int sampleIndex, QPointF* sample, QwtColumnRect* param4);

void QwtPlotBarChart_delete(QwtPlotBarChart* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
