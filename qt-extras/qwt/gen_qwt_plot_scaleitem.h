#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_SCALEITEM_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_SCALEITEM_H

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
class QPalette;
class QSizeF;
class QwtGraphic;
class QwtPlotItem;
class QwtPlotScaleItem;
class QwtScaleDiv;
class QwtScaleDraw;
#else
typedef struct QBrush QBrush;
typedef struct QFont QFont;
typedef struct QPalette QPalette;
typedef struct QSizeF QSizeF;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotScaleItem QwtPlotScaleItem;
typedef struct QwtScaleDiv QwtScaleDiv;
typedef struct QwtScaleDraw QwtScaleDraw;
#endif

QwtPlotScaleItem* QwtPlotScaleItem_new();
QwtPlotScaleItem* QwtPlotScaleItem_new2(int param1);
QwtPlotScaleItem* QwtPlotScaleItem_new3(int param1, const double pos);
void QwtPlotScaleItem_virtbase(QwtPlotScaleItem* src, QwtPlotItem** outptr_QwtPlotItem);
int QwtPlotScaleItem_rtti(const QwtPlotScaleItem* self);
void QwtPlotScaleItem_setScaleDiv(QwtPlotScaleItem* self, QwtScaleDiv* scaleDiv);
QwtScaleDiv* QwtPlotScaleItem_scaleDiv(const QwtPlotScaleItem* self);
void QwtPlotScaleItem_setScaleDivFromAxis(QwtPlotScaleItem* self, bool on);
bool QwtPlotScaleItem_isScaleDivFromAxis(const QwtPlotScaleItem* self);
void QwtPlotScaleItem_setPalette(QwtPlotScaleItem* self, QPalette* palette);
QPalette* QwtPlotScaleItem_palette(const QwtPlotScaleItem* self);
void QwtPlotScaleItem_setFont(QwtPlotScaleItem* self, QFont* font);
QFont* QwtPlotScaleItem_font(const QwtPlotScaleItem* self);
void QwtPlotScaleItem_setScaleDraw(QwtPlotScaleItem* self, QwtScaleDraw* scaleDraw);
QwtScaleDraw* QwtPlotScaleItem_scaleDraw(const QwtPlotScaleItem* self);
QwtScaleDraw* QwtPlotScaleItem_scaleDraw2(QwtPlotScaleItem* self);
void QwtPlotScaleItem_setPosition(QwtPlotScaleItem* self, double pos);
double QwtPlotScaleItem_position(const QwtPlotScaleItem* self);
void QwtPlotScaleItem_setBorderDistance(QwtPlotScaleItem* self, int borderDistance);
int QwtPlotScaleItem_borderDistance(const QwtPlotScaleItem* self);
void QwtPlotScaleItem_setAlignment(QwtPlotScaleItem* self, int alignment);
void QwtPlotScaleItem_updateScaleDiv(QwtPlotScaleItem* self, QwtScaleDiv* param1, QwtScaleDiv* param2);

void QwtPlotScaleItem_delete(QwtPlotScaleItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
