#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_TRADINGCURVE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_TRADINGCURVE_H

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
class QRectF;
class QSizeF;
class QwtAbstractSeriesStore;
class QwtGraphic;
class QwtOHLCSample;
class QwtPlotItem;
class QwtPlotSeriesItem;
class QwtPlotTradingCurve;
class QwtText;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPainter QPainter;
typedef struct QPen QPen;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QwtAbstractSeriesStore QwtAbstractSeriesStore;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtOHLCSample QwtOHLCSample;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotSeriesItem QwtPlotSeriesItem;
typedef struct QwtPlotTradingCurve QwtPlotTradingCurve;
typedef struct QwtText QwtText;
#endif

QwtPlotTradingCurve* QwtPlotTradingCurve_new();
QwtPlotTradingCurve* QwtPlotTradingCurve_new2(QwtText* title);
QwtPlotTradingCurve* QwtPlotTradingCurve_new3(struct miqt_string title);
void QwtPlotTradingCurve_virtbase(QwtPlotTradingCurve* src, QwtPlotSeriesItem** outptr_QwtPlotSeriesItem);
int QwtPlotTradingCurve_rtti(const QwtPlotTradingCurve* self);
void QwtPlotTradingCurve_setPaintAttribute(QwtPlotTradingCurve* self, int param1);
bool QwtPlotTradingCurve_testPaintAttribute(const QwtPlotTradingCurve* self, int param1);
void QwtPlotTradingCurve_setSamples(QwtPlotTradingCurve* self, struct miqt_array /* of QwtOHLCSample* */  samples);
void QwtPlotTradingCurve_setSymbolStyle(QwtPlotTradingCurve* self, int style);
int QwtPlotTradingCurve_symbolStyle(const QwtPlotTradingCurve* self);
void QwtPlotTradingCurve_setSymbolPen(QwtPlotTradingCurve* self, QColor* param1);
void QwtPlotTradingCurve_setSymbolPenWithSymbolPen(QwtPlotTradingCurve* self, QPen* symbolPen);
QPen* QwtPlotTradingCurve_symbolPen(const QwtPlotTradingCurve* self);
void QwtPlotTradingCurve_setSymbolBrush(QwtPlotTradingCurve* self, int param1, QBrush* param2);
QBrush* QwtPlotTradingCurve_symbolBrush(const QwtPlotTradingCurve* self, int param1);
void QwtPlotTradingCurve_setSymbolExtent(QwtPlotTradingCurve* self, double symbolExtent);
double QwtPlotTradingCurve_symbolExtent(const QwtPlotTradingCurve* self);
void QwtPlotTradingCurve_setMinSymbolWidth(QwtPlotTradingCurve* self, double minSymbolWidth);
double QwtPlotTradingCurve_minSymbolWidth(const QwtPlotTradingCurve* self);
void QwtPlotTradingCurve_setMaxSymbolWidth(QwtPlotTradingCurve* self, double maxSymbolWidth);
double QwtPlotTradingCurve_maxSymbolWidth(const QwtPlotTradingCurve* self);
QRectF* QwtPlotTradingCurve_boundingRect(const QwtPlotTradingCurve* self);
QwtGraphic* QwtPlotTradingCurve_legendIcon(const QwtPlotTradingCurve* self, int index, QSizeF* param2);
void QwtPlotTradingCurve_drawUserSymbol(const QwtPlotTradingCurve* self, QPainter* param1, int param2, QwtOHLCSample* param3, int param4, bool inverted, double symbolWidth);
void QwtPlotTradingCurve_setPaintAttribute2(QwtPlotTradingCurve* self, int param1, bool on);
void QwtPlotTradingCurve_setSymbolPen2(QwtPlotTradingCurve* self, QColor* param1, double width);
void QwtPlotTradingCurve_setSymbolPen3(QwtPlotTradingCurve* self, QColor* param1, double width, int param3);

void QwtPlotTradingCurve_delete(QwtPlotTradingCurve* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
