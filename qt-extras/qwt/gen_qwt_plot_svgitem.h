#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_SVGITEM_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_SVGITEM_H

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
class QPainter;
class QRectF;
class QSizeF;
class QSvgRenderer;
class QwtGraphic;
class QwtPlotItem;
class QwtPlotSvgItem;
class QwtText;
#else
typedef struct QBrush QBrush;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QSvgRenderer QSvgRenderer;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotSvgItem QwtPlotSvgItem;
typedef struct QwtText QwtText;
#endif

QwtPlotSvgItem* QwtPlotSvgItem_new();
QwtPlotSvgItem* QwtPlotSvgItem_new2(QwtText* title);
QwtPlotSvgItem* QwtPlotSvgItem_new3(struct miqt_string title);
void QwtPlotSvgItem_virtbase(QwtPlotSvgItem* src, QwtPlotItem** outptr_QwtPlotItem);
bool QwtPlotSvgItem_loadFile(QwtPlotSvgItem* self, QRectF* param1, struct miqt_string fileName);
bool QwtPlotSvgItem_loadData(QwtPlotSvgItem* self, QRectF* param1, struct miqt_string param2);
QRectF* QwtPlotSvgItem_boundingRect(const QwtPlotSvgItem* self);
int QwtPlotSvgItem_rtti(const QwtPlotSvgItem* self);

void QwtPlotSvgItem_delete(QwtPlotSvgItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
