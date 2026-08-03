#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_HISTOGRAM_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_HISTOGRAM_H

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
class QColor;
class QPainter;
class QPen;
class QRectF;
class QSizeF;
class QwtAbstractSeriesStore;
class QwtColumnRect;
class QwtColumnSymbol;
class QwtGraphic;
class QwtIntervalSample;
class QwtPlotHistogram;
class QwtPlotItem;
class QwtPlotSeriesItem;
class QwtText;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPainter QPainter;
typedef struct QPen QPen;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QwtAbstractSeriesStore QwtAbstractSeriesStore;
typedef struct QwtColumnRect QwtColumnRect;
typedef struct QwtColumnSymbol QwtColumnSymbol;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtIntervalSample QwtIntervalSample;
typedef struct QwtPlotHistogram QwtPlotHistogram;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotSeriesItem QwtPlotSeriesItem;
typedef struct QwtText QwtText;
#endif

QwtPlotHistogram* QwtPlotHistogram_new();
QwtPlotHistogram* QwtPlotHistogram_new2(QwtText* title);
QwtPlotHistogram* QwtPlotHistogram_new3(struct miqt_string title);
void QwtPlotHistogram_virtbase(QwtPlotHistogram* src, QwtPlotSeriesItem** outptr_QwtPlotSeriesItem);
int QwtPlotHistogram_rtti(const QwtPlotHistogram* self);
void QwtPlotHistogram_setPen(QwtPlotHistogram* self, QColor* param1);
void QwtPlotHistogram_setPenWithPen(QwtPlotHistogram* self, QPen* pen);
QPen* QwtPlotHistogram_pen(const QwtPlotHistogram* self);
void QwtPlotHistogram_setBrush(QwtPlotHistogram* self, QBrush* brush);
QBrush* QwtPlotHistogram_brush(const QwtPlotHistogram* self);
void QwtPlotHistogram_setSamples(QwtPlotHistogram* self, struct miqt_array /* of QwtIntervalSample* */  samples);
void QwtPlotHistogram_setBaseline(QwtPlotHistogram* self, double baseline);
double QwtPlotHistogram_baseline(const QwtPlotHistogram* self);
void QwtPlotHistogram_setStyle(QwtPlotHistogram* self, int style);
int QwtPlotHistogram_style(const QwtPlotHistogram* self);
void QwtPlotHistogram_setSymbol(QwtPlotHistogram* self, QwtColumnSymbol* symbol);
QwtColumnSymbol* QwtPlotHistogram_symbol(const QwtPlotHistogram* self);
QRectF* QwtPlotHistogram_boundingRect(const QwtPlotHistogram* self);
QwtGraphic* QwtPlotHistogram_legendIcon(const QwtPlotHistogram* self, int index, QSizeF* param2);
void QwtPlotHistogram_drawColumn(const QwtPlotHistogram* self, QPainter* param1, QwtColumnRect* param2, QwtIntervalSample* param3);
void QwtPlotHistogram_setPen2(QwtPlotHistogram* self, QColor* param1, double width);
void QwtPlotHistogram_setPen3(QwtPlotHistogram* self, QColor* param1, double width, int param3);

void QwtPlotHistogram_delete(QwtPlotHistogram* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
