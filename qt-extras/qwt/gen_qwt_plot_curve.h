#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_CURVE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_CURVE_H

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
class QPen;
class QPoint;
class QPointF;
class QSizeF;
class QwtAbstractSeriesStore;
class QwtCurveFitter;
class QwtGraphic;
class QwtPlotCurve;
class QwtPlotItem;
class QwtPlotSeriesItem;
class QwtSymbol;
class QwtText;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPen QPen;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QSizeF QSizeF;
typedef struct QwtAbstractSeriesStore QwtAbstractSeriesStore;
typedef struct QwtCurveFitter QwtCurveFitter;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtPlotCurve QwtPlotCurve;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotSeriesItem QwtPlotSeriesItem;
typedef struct QwtSymbol QwtSymbol;
typedef struct QwtText QwtText;
#endif

QwtPlotCurve* QwtPlotCurve_new();
QwtPlotCurve* QwtPlotCurve_new2(QwtText* title);
QwtPlotCurve* QwtPlotCurve_new3(struct miqt_string title);
void QwtPlotCurve_virtbase(QwtPlotCurve* src, QwtPlotSeriesItem** outptr_QwtPlotSeriesItem);
int QwtPlotCurve_rtti(const QwtPlotCurve* self);
void QwtPlotCurve_setPaintAttribute(QwtPlotCurve* self, int param1);
bool QwtPlotCurve_testPaintAttribute(const QwtPlotCurve* self, int param1);
void QwtPlotCurve_setLegendAttribute(QwtPlotCurve* self, int param1);
bool QwtPlotCurve_testLegendAttribute(const QwtPlotCurve* self, int param1);
void QwtPlotCurve_setRawSamples(QwtPlotCurve* self, const double* xData, const double* yData, int size);
void QwtPlotCurve_setSamples(QwtPlotCurve* self, const double* xData, const double* yData, int size);
void QwtPlotCurve_setSamples2(QwtPlotCurve* self, struct miqt_array /* of double */  xData, struct miqt_array /* of double */  yData);
void QwtPlotCurve_setSamplesWithSamples(QwtPlotCurve* self, struct miqt_array /* of QPointF* */  samples);
int QwtPlotCurve_closestPoint(const QwtPlotCurve* self, QPoint* pos);
double QwtPlotCurve_minXValue(const QwtPlotCurve* self);
double QwtPlotCurve_maxXValue(const QwtPlotCurve* self);
double QwtPlotCurve_minYValue(const QwtPlotCurve* self);
double QwtPlotCurve_maxYValue(const QwtPlotCurve* self);
void QwtPlotCurve_setCurveAttribute(QwtPlotCurve* self, int param1);
bool QwtPlotCurve_testCurveAttribute(const QwtPlotCurve* self, int param1);
void QwtPlotCurve_setPen(QwtPlotCurve* self, QColor* param1);
void QwtPlotCurve_setPenWithPen(QwtPlotCurve* self, QPen* pen);
QPen* QwtPlotCurve_pen(const QwtPlotCurve* self);
void QwtPlotCurve_setBrush(QwtPlotCurve* self, QBrush* brush);
QBrush* QwtPlotCurve_brush(const QwtPlotCurve* self);
void QwtPlotCurve_setBaseline(QwtPlotCurve* self, double baseline);
double QwtPlotCurve_baseline(const QwtPlotCurve* self);
void QwtPlotCurve_setStyle(QwtPlotCurve* self, int style);
int QwtPlotCurve_style(const QwtPlotCurve* self);
void QwtPlotCurve_setSymbol(QwtPlotCurve* self, QwtSymbol* symbol);
QwtSymbol* QwtPlotCurve_symbol(const QwtPlotCurve* self);
void QwtPlotCurve_setCurveFitter(QwtPlotCurve* self, QwtCurveFitter* curveFitter);
QwtCurveFitter* QwtPlotCurve_curveFitter(const QwtPlotCurve* self);
QwtGraphic* QwtPlotCurve_legendIcon(const QwtPlotCurve* self, int index, QSizeF* param2);
void QwtPlotCurve_setPaintAttribute2(QwtPlotCurve* self, int param1, bool on);
void QwtPlotCurve_setLegendAttribute2(QwtPlotCurve* self, int param1, bool on);
int QwtPlotCurve_closestPoint2(const QwtPlotCurve* self, QPoint* pos, double* dist);
void QwtPlotCurve_setCurveAttribute2(QwtPlotCurve* self, int param1, bool on);
void QwtPlotCurve_setPen2(QwtPlotCurve* self, QColor* param1, double width);
void QwtPlotCurve_setPen3(QwtPlotCurve* self, QColor* param1, double width, int param3);

void QwtPlotCurve_delete(QwtPlotCurve* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
