#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_MARKER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_MARKER_H

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
class QPointF;
class QRectF;
class QSizeF;
class QwtGraphic;
class QwtPlotItem;
class QwtPlotMarker;
class QwtSymbol;
class QwtText;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPainter QPainter;
typedef struct QPen QPen;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotMarker QwtPlotMarker;
typedef struct QwtSymbol QwtSymbol;
typedef struct QwtText QwtText;
#endif

QwtPlotMarker* QwtPlotMarker_new();
QwtPlotMarker* QwtPlotMarker_new2(QwtText* title);
QwtPlotMarker* QwtPlotMarker_new3(struct miqt_string title);
void QwtPlotMarker_virtbase(QwtPlotMarker* src, QwtPlotItem** outptr_QwtPlotItem);
int QwtPlotMarker_rtti(const QwtPlotMarker* self);
double QwtPlotMarker_xValue(const QwtPlotMarker* self);
double QwtPlotMarker_yValue(const QwtPlotMarker* self);
QPointF* QwtPlotMarker_value(const QwtPlotMarker* self);
void QwtPlotMarker_setXValue(QwtPlotMarker* self, double xValue);
void QwtPlotMarker_setYValue(QwtPlotMarker* self, double yValue);
void QwtPlotMarker_setValue(QwtPlotMarker* self, double param1, double param2);
void QwtPlotMarker_setValueWithValue(QwtPlotMarker* self, QPointF* value);
void QwtPlotMarker_setLineStyle(QwtPlotMarker* self, int lineStyle);
int QwtPlotMarker_lineStyle(const QwtPlotMarker* self);
void QwtPlotMarker_setLinePen(QwtPlotMarker* self, QColor* param1);
void QwtPlotMarker_setLinePenWithLinePen(QwtPlotMarker* self, QPen* linePen);
QPen* QwtPlotMarker_linePen(const QwtPlotMarker* self);
void QwtPlotMarker_setSymbol(QwtPlotMarker* self, QwtSymbol* symbol);
QwtSymbol* QwtPlotMarker_symbol(const QwtPlotMarker* self);
void QwtPlotMarker_setLabel(QwtPlotMarker* self, QwtText* label);
QwtText* QwtPlotMarker_label(const QwtPlotMarker* self);
void QwtPlotMarker_setLabelAlignment(QwtPlotMarker* self, int labelAlignment);
int QwtPlotMarker_labelAlignment(const QwtPlotMarker* self);
void QwtPlotMarker_setLabelOrientation(QwtPlotMarker* self, int labelOrientation);
int QwtPlotMarker_labelOrientation(const QwtPlotMarker* self);
void QwtPlotMarker_setSpacing(QwtPlotMarker* self, int spacing);
int QwtPlotMarker_spacing(const QwtPlotMarker* self);
QRectF* QwtPlotMarker_boundingRect(const QwtPlotMarker* self);
QwtGraphic* QwtPlotMarker_legendIcon(const QwtPlotMarker* self, int index, QSizeF* param2);
void QwtPlotMarker_drawLines(const QwtPlotMarker* self, QPainter* param1, QRectF* param2, QPointF* param3);
void QwtPlotMarker_drawLabel(const QwtPlotMarker* self, QPainter* param1, QRectF* param2, QPointF* param3);
void QwtPlotMarker_setLinePen2(QwtPlotMarker* self, QColor* param1, double width);
void QwtPlotMarker_setLinePen3(QwtPlotMarker* self, QColor* param1, double width, int param3);

void QwtPlotMarker_delete(QwtPlotMarker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
