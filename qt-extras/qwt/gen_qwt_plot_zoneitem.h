#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_ZONEITEM_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_ZONEITEM_H

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
class QwtGraphic;
class QwtInterval;
class QwtPlotItem;
class QwtPlotZoneItem;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPen QPen;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtInterval QwtInterval;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotZoneItem QwtPlotZoneItem;
#endif

QwtPlotZoneItem* QwtPlotZoneItem_new();
void QwtPlotZoneItem_virtbase(QwtPlotZoneItem* src, QwtPlotItem** outptr_QwtPlotItem);
int QwtPlotZoneItem_rtti(const QwtPlotZoneItem* self);
void QwtPlotZoneItem_setOrientation(QwtPlotZoneItem* self, int orientation);
int QwtPlotZoneItem_orientation(QwtPlotZoneItem* self);
void QwtPlotZoneItem_setInterval(QwtPlotZoneItem* self, double min, double max);
void QwtPlotZoneItem_setIntervalWithInterval(QwtPlotZoneItem* self, QwtInterval* interval);
QwtInterval* QwtPlotZoneItem_interval(const QwtPlotZoneItem* self);
void QwtPlotZoneItem_setPen(QwtPlotZoneItem* self, QColor* param1);
void QwtPlotZoneItem_setPenWithPen(QwtPlotZoneItem* self, QPen* pen);
QPen* QwtPlotZoneItem_pen(const QwtPlotZoneItem* self);
void QwtPlotZoneItem_setBrush(QwtPlotZoneItem* self, QBrush* brush);
QBrush* QwtPlotZoneItem_brush(const QwtPlotZoneItem* self);
QRectF* QwtPlotZoneItem_boundingRect(const QwtPlotZoneItem* self);
void QwtPlotZoneItem_setPen2(QwtPlotZoneItem* self, QColor* param1, double width);
void QwtPlotZoneItem_setPen3(QwtPlotZoneItem* self, QColor* param1, double width, int param3);

void QwtPlotZoneItem_delete(QwtPlotZoneItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
