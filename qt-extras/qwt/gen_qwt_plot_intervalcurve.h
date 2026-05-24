#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_INTERVALCURVE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_INTERVALCURVE_H

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
class QRectF;
class QSizeF;
class QwtAbstractSeriesStore;
class QwtGraphic;
class QwtIntervalSample;
class QwtIntervalSymbol;
class QwtPlotIntervalCurve;
class QwtPlotItem;
class QwtPlotSeriesItem;
class QwtText;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPen QPen;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QwtAbstractSeriesStore QwtAbstractSeriesStore;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtIntervalSample QwtIntervalSample;
typedef struct QwtIntervalSymbol QwtIntervalSymbol;
typedef struct QwtPlotIntervalCurve QwtPlotIntervalCurve;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotSeriesItem QwtPlotSeriesItem;
typedef struct QwtText QwtText;
#endif

QwtPlotIntervalCurve* QwtPlotIntervalCurve_new();
QwtPlotIntervalCurve* QwtPlotIntervalCurve_new2(QwtText* title);
QwtPlotIntervalCurve* QwtPlotIntervalCurve_new3(struct miqt_string title);
void QwtPlotIntervalCurve_virtbase(QwtPlotIntervalCurve* src, QwtPlotSeriesItem** outptr_QwtPlotSeriesItem);
int QwtPlotIntervalCurve_rtti(const QwtPlotIntervalCurve* self);
void QwtPlotIntervalCurve_setPaintAttribute(QwtPlotIntervalCurve* self, int param1);
bool QwtPlotIntervalCurve_testPaintAttribute(const QwtPlotIntervalCurve* self, int param1);
void QwtPlotIntervalCurve_setSamples(QwtPlotIntervalCurve* self, struct miqt_array /* of QwtIntervalSample* */  samples);
void QwtPlotIntervalCurve_setPen(QwtPlotIntervalCurve* self, QColor* param1);
void QwtPlotIntervalCurve_setPenWithPen(QwtPlotIntervalCurve* self, QPen* pen);
QPen* QwtPlotIntervalCurve_pen(const QwtPlotIntervalCurve* self);
void QwtPlotIntervalCurve_setBrush(QwtPlotIntervalCurve* self, QBrush* brush);
QBrush* QwtPlotIntervalCurve_brush(const QwtPlotIntervalCurve* self);
void QwtPlotIntervalCurve_setStyle(QwtPlotIntervalCurve* self, int style);
int QwtPlotIntervalCurve_style(const QwtPlotIntervalCurve* self);
void QwtPlotIntervalCurve_setSymbol(QwtPlotIntervalCurve* self, QwtIntervalSymbol* symbol);
QwtIntervalSymbol* QwtPlotIntervalCurve_symbol(const QwtPlotIntervalCurve* self);
QRectF* QwtPlotIntervalCurve_boundingRect(const QwtPlotIntervalCurve* self);
QwtGraphic* QwtPlotIntervalCurve_legendIcon(const QwtPlotIntervalCurve* self, int index, QSizeF* param2);
void QwtPlotIntervalCurve_setPaintAttribute2(QwtPlotIntervalCurve* self, int param1, bool on);
void QwtPlotIntervalCurve_setPen2(QwtPlotIntervalCurve* self, QColor* param1, double width);
void QwtPlotIntervalCurve_setPen3(QwtPlotIntervalCurve* self, QColor* param1, double width, int param3);

void QwtPlotIntervalCurve_delete(QwtPlotIntervalCurve* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
