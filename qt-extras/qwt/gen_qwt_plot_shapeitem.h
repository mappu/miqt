#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_SHAPEITEM_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_SHAPEITEM_H

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
class QPainterPath;
class QPen;
class QRectF;
class QSizeF;
class QwtGraphic;
class QwtPlotItem;
class QwtPlotShapeItem;
class QwtText;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPainterPath QPainterPath;
typedef struct QPen QPen;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotShapeItem QwtPlotShapeItem;
typedef struct QwtText QwtText;
#endif

QwtPlotShapeItem* QwtPlotShapeItem_new();
QwtPlotShapeItem* QwtPlotShapeItem_new2(QwtText* title);
QwtPlotShapeItem* QwtPlotShapeItem_new3(struct miqt_string title);
void QwtPlotShapeItem_virtbase(QwtPlotShapeItem* src, QwtPlotItem** outptr_QwtPlotItem);
void QwtPlotShapeItem_setPaintAttribute(QwtPlotShapeItem* self, int param1);
bool QwtPlotShapeItem_testPaintAttribute(const QwtPlotShapeItem* self, int param1);
void QwtPlotShapeItem_setLegendMode(QwtPlotShapeItem* self, int legendMode);
int QwtPlotShapeItem_legendMode(const QwtPlotShapeItem* self);
void QwtPlotShapeItem_setRect(QwtPlotShapeItem* self, QRectF* rect);
void QwtPlotShapeItem_setShape(QwtPlotShapeItem* self, QPainterPath* shape);
QPainterPath* QwtPlotShapeItem_shape(const QwtPlotShapeItem* self);
void QwtPlotShapeItem_setPen(QwtPlotShapeItem* self, QColor* param1);
void QwtPlotShapeItem_setPenWithPen(QwtPlotShapeItem* self, QPen* pen);
QPen* QwtPlotShapeItem_pen(const QwtPlotShapeItem* self);
void QwtPlotShapeItem_setBrush(QwtPlotShapeItem* self, QBrush* brush);
QBrush* QwtPlotShapeItem_brush(const QwtPlotShapeItem* self);
void QwtPlotShapeItem_setRenderTolerance(QwtPlotShapeItem* self, double renderTolerance);
double QwtPlotShapeItem_renderTolerance(const QwtPlotShapeItem* self);
QRectF* QwtPlotShapeItem_boundingRect(const QwtPlotShapeItem* self);
QwtGraphic* QwtPlotShapeItem_legendIcon(const QwtPlotShapeItem* self, int index, QSizeF* param2);
int QwtPlotShapeItem_rtti(const QwtPlotShapeItem* self);
void QwtPlotShapeItem_setPaintAttribute2(QwtPlotShapeItem* self, int param1, bool on);
void QwtPlotShapeItem_setPen2(QwtPlotShapeItem* self, QColor* param1, double width);
void QwtPlotShapeItem_setPen3(QwtPlotShapeItem* self, QColor* param1, double width, int param3);

void QwtPlotShapeItem_delete(QwtPlotShapeItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
