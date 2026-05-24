#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_MULTI_BARCHART_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_MULTI_BARCHART_H

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
class QRectF;
class QSizeF;
class QwtAbstractSeriesStore;
class QwtColumnRect;
class QwtColumnSymbol;
class QwtGraphic;
class QwtLegendData;
class QwtPlotAbstractBarChart;
class QwtPlotItem;
class QwtPlotMultiBarChart;
class QwtPlotSeriesItem;
class QwtSetSample;
class QwtText;
#else
typedef struct QBrush QBrush;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QwtAbstractSeriesStore QwtAbstractSeriesStore;
typedef struct QwtColumnRect QwtColumnRect;
typedef struct QwtColumnSymbol QwtColumnSymbol;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtLegendData QwtLegendData;
typedef struct QwtPlotAbstractBarChart QwtPlotAbstractBarChart;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotMultiBarChart QwtPlotMultiBarChart;
typedef struct QwtPlotSeriesItem QwtPlotSeriesItem;
typedef struct QwtSetSample QwtSetSample;
typedef struct QwtText QwtText;
#endif

QwtPlotMultiBarChart* QwtPlotMultiBarChart_new();
QwtPlotMultiBarChart* QwtPlotMultiBarChart_new2(QwtText* title);
QwtPlotMultiBarChart* QwtPlotMultiBarChart_new3(struct miqt_string title);
void QwtPlotMultiBarChart_virtbase(QwtPlotMultiBarChart* src, QwtPlotAbstractBarChart** outptr_QwtPlotAbstractBarChart);
int QwtPlotMultiBarChart_rtti(const QwtPlotMultiBarChart* self);
void QwtPlotMultiBarChart_setBarTitles(QwtPlotMultiBarChart* self, struct miqt_array /* of QwtText* */  barTitles);
struct miqt_array /* of QwtText* */  QwtPlotMultiBarChart_barTitles(const QwtPlotMultiBarChart* self);
void QwtPlotMultiBarChart_setSamples(QwtPlotMultiBarChart* self, struct miqt_array /* of QwtSetSample* */  samples);
void QwtPlotMultiBarChart_setSamplesWithSamples(QwtPlotMultiBarChart* self, struct miqt_array /* of struct miqt_array  of double   */  samples);
void QwtPlotMultiBarChart_setStyle(QwtPlotMultiBarChart* self, int style);
int QwtPlotMultiBarChart_style(const QwtPlotMultiBarChart* self);
void QwtPlotMultiBarChart_setSymbol(QwtPlotMultiBarChart* self, int valueIndex, QwtColumnSymbol* param2);
QwtColumnSymbol* QwtPlotMultiBarChart_symbol(const QwtPlotMultiBarChart* self, int valueIndex);
void QwtPlotMultiBarChart_resetSymbolMap(QwtPlotMultiBarChart* self);
QRectF* QwtPlotMultiBarChart_boundingRect(const QwtPlotMultiBarChart* self);
struct miqt_array /* of QwtLegendData* */  QwtPlotMultiBarChart_legendData(const QwtPlotMultiBarChart* self);
QwtGraphic* QwtPlotMultiBarChart_legendIcon(const QwtPlotMultiBarChart* self, int index, QSizeF* param2);
QwtColumnSymbol* QwtPlotMultiBarChart_specialSymbol(const QwtPlotMultiBarChart* self, int sampleIndex, int valueIndex);
void QwtPlotMultiBarChart_drawBar(const QwtPlotMultiBarChart* self, QPainter* param1, int sampleIndex, int valueIndex, QwtColumnRect* param4);

void QwtPlotMultiBarChart_delete(QwtPlotMultiBarChart* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
