#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_TEXTLABEL_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_TEXTLABEL_H

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
class QwtPlotItem;
class QwtPlotTextLabel;
class QwtText;
#else
typedef struct QBrush QBrush;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotTextLabel QwtPlotTextLabel;
typedef struct QwtText QwtText;
#endif

QwtPlotTextLabel* QwtPlotTextLabel_new();
void QwtPlotTextLabel_virtbase(QwtPlotTextLabel* src, QwtPlotItem** outptr_QwtPlotItem);
int QwtPlotTextLabel_rtti(const QwtPlotTextLabel* self);
void QwtPlotTextLabel_setText(QwtPlotTextLabel* self, QwtText* text);
QwtText* QwtPlotTextLabel_text(const QwtPlotTextLabel* self);
void QwtPlotTextLabel_setMargin(QwtPlotTextLabel* self, int margin);
int QwtPlotTextLabel_margin(const QwtPlotTextLabel* self);
QRectF* QwtPlotTextLabel_textRect(const QwtPlotTextLabel* self, QRectF* param1, QSizeF* param2);

void QwtPlotTextLabel_delete(QwtPlotTextLabel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
