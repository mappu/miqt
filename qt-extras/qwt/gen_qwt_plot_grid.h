#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_GRID_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_GRID_H

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
class QSizeF;
class QwtGraphic;
class QwtPlotGrid;
class QwtPlotItem;
class QwtScaleDiv;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPen QPen;
typedef struct QSizeF QSizeF;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtPlotGrid QwtPlotGrid;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtScaleDiv QwtScaleDiv;
#endif

QwtPlotGrid* QwtPlotGrid_new();
void QwtPlotGrid_virtbase(QwtPlotGrid* src, QwtPlotItem** outptr_QwtPlotItem);
int QwtPlotGrid_rtti(const QwtPlotGrid* self);
void QwtPlotGrid_enableX(QwtPlotGrid* self, bool param1);
bool QwtPlotGrid_xEnabled(const QwtPlotGrid* self);
void QwtPlotGrid_enableY(QwtPlotGrid* self, bool param1);
bool QwtPlotGrid_yEnabled(const QwtPlotGrid* self);
void QwtPlotGrid_enableXMin(QwtPlotGrid* self, bool param1);
bool QwtPlotGrid_xMinEnabled(const QwtPlotGrid* self);
void QwtPlotGrid_enableYMin(QwtPlotGrid* self, bool param1);
bool QwtPlotGrid_yMinEnabled(const QwtPlotGrid* self);
void QwtPlotGrid_setXDiv(QwtPlotGrid* self, QwtScaleDiv* xDiv);
QwtScaleDiv* QwtPlotGrid_xScaleDiv(const QwtPlotGrid* self);
void QwtPlotGrid_setYDiv(QwtPlotGrid* self, QwtScaleDiv* yDiv);
QwtScaleDiv* QwtPlotGrid_yScaleDiv(const QwtPlotGrid* self);
void QwtPlotGrid_setPen(QwtPlotGrid* self, QColor* param1);
void QwtPlotGrid_setPenWithPen(QwtPlotGrid* self, QPen* pen);
void QwtPlotGrid_setMajorPen(QwtPlotGrid* self, QColor* param1);
void QwtPlotGrid_setMajorPenWithMajorPen(QwtPlotGrid* self, QPen* majorPen);
QPen* QwtPlotGrid_majorPen(const QwtPlotGrid* self);
void QwtPlotGrid_setMinorPen(QwtPlotGrid* self, QColor* param1);
void QwtPlotGrid_setMinorPenWithMinorPen(QwtPlotGrid* self, QPen* minorPen);
QPen* QwtPlotGrid_minorPen(const QwtPlotGrid* self);
void QwtPlotGrid_updateScaleDiv(QwtPlotGrid* self, QwtScaleDiv* xScaleDiv, QwtScaleDiv* yScaleDiv);
void QwtPlotGrid_setPen2(QwtPlotGrid* self, QColor* param1, double width);
void QwtPlotGrid_setPen3(QwtPlotGrid* self, QColor* param1, double width, int param3);
void QwtPlotGrid_setMajorPen2(QwtPlotGrid* self, QColor* param1, double width);
void QwtPlotGrid_setMajorPen3(QwtPlotGrid* self, QColor* param1, double width, int param3);
void QwtPlotGrid_setMinorPen2(QwtPlotGrid* self, QColor* param1, double width);
void QwtPlotGrid_setMinorPen3(QwtPlotGrid* self, QColor* param1, double width, int param3);

void QwtPlotGrid_delete(QwtPlotGrid* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
