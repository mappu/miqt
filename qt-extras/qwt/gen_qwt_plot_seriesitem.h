#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_SERIESITEM_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_SERIESITEM_H

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
class QRectF;
class QSizeF;
class QwtAbstractSeriesStore;
class QwtGraphic;
class QwtPlotItem;
class QwtPlotSeriesItem;
class QwtScaleDiv;
#else
typedef struct QBrush QBrush;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QwtAbstractSeriesStore QwtAbstractSeriesStore;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotSeriesItem QwtPlotSeriesItem;
typedef struct QwtScaleDiv QwtScaleDiv;
#endif

void QwtPlotSeriesItem_virtbase(QwtPlotSeriesItem* src, QwtPlotItem** outptr_QwtPlotItem, QwtAbstractSeriesStore** outptr_QwtAbstractSeriesStore);
void QwtPlotSeriesItem_setOrientation(QwtPlotSeriesItem* self, int orientation);
int QwtPlotSeriesItem_orientation(const QwtPlotSeriesItem* self);
QRectF* QwtPlotSeriesItem_boundingRect(const QwtPlotSeriesItem* self);
void QwtPlotSeriesItem_updateScaleDiv(QwtPlotSeriesItem* self, QwtScaleDiv* param1, QwtScaleDiv* param2);
void QwtPlotSeriesItem_dataChanged(QwtPlotSeriesItem* self);

void QwtPlotSeriesItem_delete(QwtPlotSeriesItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
