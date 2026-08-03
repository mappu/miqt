#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_RASTERITEM_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_RASTERITEM_H

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
class QwtGraphic;
class QwtInterval;
class QwtPlotItem;
class QwtPlotRasterItem;
#else
typedef struct QBrush QBrush;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtInterval QwtInterval;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotRasterItem QwtPlotRasterItem;
#endif

void QwtPlotRasterItem_virtbase(QwtPlotRasterItem* src, QwtPlotItem** outptr_QwtPlotItem);
void QwtPlotRasterItem_setPaintAttribute(QwtPlotRasterItem* self, int param1);
bool QwtPlotRasterItem_testPaintAttribute(const QwtPlotRasterItem* self, int param1);
void QwtPlotRasterItem_setAlpha(QwtPlotRasterItem* self, int alpha);
int QwtPlotRasterItem_alpha(const QwtPlotRasterItem* self);
void QwtPlotRasterItem_setCachePolicy(QwtPlotRasterItem* self, int cachePolicy);
int QwtPlotRasterItem_cachePolicy(const QwtPlotRasterItem* self);
void QwtPlotRasterItem_invalidateCache(QwtPlotRasterItem* self);
QRectF* QwtPlotRasterItem_pixelHint(const QwtPlotRasterItem* self, QRectF* param1);
QwtInterval* QwtPlotRasterItem_interval(const QwtPlotRasterItem* self, int param1);
QRectF* QwtPlotRasterItem_boundingRect(const QwtPlotRasterItem* self);
void QwtPlotRasterItem_setPaintAttribute2(QwtPlotRasterItem* self, int param1, bool on);

void QwtPlotRasterItem_delete(QwtPlotRasterItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
