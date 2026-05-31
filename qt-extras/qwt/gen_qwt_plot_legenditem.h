#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_LEGENDITEM_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_LEGENDITEM_H

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
class QFont;
class QPainter;
class QPen;
class QRect;
class QRectF;
class QSize;
class QSizeF;
class QwtGraphic;
class QwtLegendData;
class QwtPlotItem;
class QwtPlotLegendItem;
#else
typedef struct QBrush QBrush;
typedef struct QFont QFont;
typedef struct QPainter QPainter;
typedef struct QPen QPen;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtLegendData QwtLegendData;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotLegendItem QwtPlotLegendItem;
#endif

QwtPlotLegendItem* QwtPlotLegendItem_new();
void QwtPlotLegendItem_virtbase(QwtPlotLegendItem* src, QwtPlotItem** outptr_QwtPlotItem);
int QwtPlotLegendItem_rtti(const QwtPlotLegendItem* self);
void QwtPlotLegendItem_setAlignment(QwtPlotLegendItem* self, int alignment);
int QwtPlotLegendItem_alignment(const QwtPlotLegendItem* self);
void QwtPlotLegendItem_setMaxColumns(QwtPlotLegendItem* self, unsigned int maxColumns);
unsigned int QwtPlotLegendItem_maxColumns(const QwtPlotLegendItem* self);
void QwtPlotLegendItem_setMargin(QwtPlotLegendItem* self, int margin);
int QwtPlotLegendItem_margin(const QwtPlotLegendItem* self);
void QwtPlotLegendItem_setSpacing(QwtPlotLegendItem* self, int spacing);
int QwtPlotLegendItem_spacing(const QwtPlotLegendItem* self);
void QwtPlotLegendItem_setItemMargin(QwtPlotLegendItem* self, int itemMargin);
int QwtPlotLegendItem_itemMargin(const QwtPlotLegendItem* self);
void QwtPlotLegendItem_setItemSpacing(QwtPlotLegendItem* self, int itemSpacing);
int QwtPlotLegendItem_itemSpacing(const QwtPlotLegendItem* self);
void QwtPlotLegendItem_setFont(QwtPlotLegendItem* self, QFont* font);
QFont* QwtPlotLegendItem_font(const QwtPlotLegendItem* self);
void QwtPlotLegendItem_setBorderDistance(QwtPlotLegendItem* self, int borderDistance);
int QwtPlotLegendItem_borderDistance(const QwtPlotLegendItem* self);
void QwtPlotLegendItem_setBorderRadius(QwtPlotLegendItem* self, double borderRadius);
double QwtPlotLegendItem_borderRadius(const QwtPlotLegendItem* self);
void QwtPlotLegendItem_setBorderPen(QwtPlotLegendItem* self, QPen* borderPen);
QPen* QwtPlotLegendItem_borderPen(const QwtPlotLegendItem* self);
void QwtPlotLegendItem_setBackgroundBrush(QwtPlotLegendItem* self, QBrush* backgroundBrush);
QBrush* QwtPlotLegendItem_backgroundBrush(const QwtPlotLegendItem* self);
void QwtPlotLegendItem_setBackgroundMode(QwtPlotLegendItem* self, int backgroundMode);
int QwtPlotLegendItem_backgroundMode(const QwtPlotLegendItem* self);
void QwtPlotLegendItem_setTextPen(QwtPlotLegendItem* self, QPen* textPen);
QPen* QwtPlotLegendItem_textPen(const QwtPlotLegendItem* self);
void QwtPlotLegendItem_clearLegend(QwtPlotLegendItem* self);
void QwtPlotLegendItem_updateLegend(QwtPlotLegendItem* self, QwtPlotItem* param1, struct miqt_array /* of QwtLegendData* */  param2);
QRect* QwtPlotLegendItem_geometry(const QwtPlotLegendItem* self, QRectF* canvasRect);
QSize* QwtPlotLegendItem_minimumSize(const QwtPlotLegendItem* self, QwtLegendData* param1);
int QwtPlotLegendItem_heightForWidth(const QwtPlotLegendItem* self, QwtLegendData* param1, int width);
struct miqt_array /* of QwtPlotItem* */  QwtPlotLegendItem_plotItems(const QwtPlotLegendItem* self);
struct miqt_array /* of QRect* */  QwtPlotLegendItem_legendGeometries(const QwtPlotLegendItem* self, QwtPlotItem* param1);
void QwtPlotLegendItem_drawLegendData(const QwtPlotLegendItem* self, QPainter* painter, QwtPlotItem* param2, QwtLegendData* param3, QRectF* param4);
void QwtPlotLegendItem_drawBackground(const QwtPlotLegendItem* self, QPainter* param1, QRectF* rect);

void QwtPlotLegendItem_delete(QwtPlotLegendItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
