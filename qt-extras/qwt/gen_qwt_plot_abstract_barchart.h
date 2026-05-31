#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_ABSTRACT_BARCHART_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_ABSTRACT_BARCHART_H

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
class QSizeF;
class QwtAbstractSeriesStore;
class QwtGraphic;
class QwtPlotAbstractBarChart;
class QwtPlotItem;
class QwtPlotSeriesItem;
#else
typedef struct QBrush QBrush;
typedef struct QSizeF QSizeF;
typedef struct QwtAbstractSeriesStore QwtAbstractSeriesStore;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtPlotAbstractBarChart QwtPlotAbstractBarChart;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotSeriesItem QwtPlotSeriesItem;
#endif

void QwtPlotAbstractBarChart_virtbase(QwtPlotAbstractBarChart* src, QwtPlotSeriesItem** outptr_QwtPlotSeriesItem);
void QwtPlotAbstractBarChart_setLayoutPolicy(QwtPlotAbstractBarChart* self, int layoutPolicy);
int QwtPlotAbstractBarChart_layoutPolicy(const QwtPlotAbstractBarChart* self);
void QwtPlotAbstractBarChart_setLayoutHint(QwtPlotAbstractBarChart* self, double layoutHint);
double QwtPlotAbstractBarChart_layoutHint(const QwtPlotAbstractBarChart* self);
void QwtPlotAbstractBarChart_setSpacing(QwtPlotAbstractBarChart* self, int spacing);
int QwtPlotAbstractBarChart_spacing(const QwtPlotAbstractBarChart* self);
void QwtPlotAbstractBarChart_setMargin(QwtPlotAbstractBarChart* self, int margin);
int QwtPlotAbstractBarChart_margin(const QwtPlotAbstractBarChart* self);
void QwtPlotAbstractBarChart_setBaseline(QwtPlotAbstractBarChart* self, double baseline);
double QwtPlotAbstractBarChart_baseline(const QwtPlotAbstractBarChart* self);

void QwtPlotAbstractBarChart_delete(QwtPlotAbstractBarChart* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
