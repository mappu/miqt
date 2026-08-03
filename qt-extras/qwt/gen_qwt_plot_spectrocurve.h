#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_SPECTROCURVE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_SPECTROCURVE_H

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
class QSizeF;
class QwtAbstractSeriesStore;
class QwtColorMap;
class QwtGraphic;
class QwtInterval;
class QwtPlotItem;
class QwtPlotSeriesItem;
class QwtPlotSpectroCurve;
class QwtPoint3D;
class QwtText;
#else
typedef struct QBrush QBrush;
typedef struct QSizeF QSizeF;
typedef struct QwtAbstractSeriesStore QwtAbstractSeriesStore;
typedef struct QwtColorMap QwtColorMap;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtInterval QwtInterval;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotSeriesItem QwtPlotSeriesItem;
typedef struct QwtPlotSpectroCurve QwtPlotSpectroCurve;
typedef struct QwtPoint3D QwtPoint3D;
typedef struct QwtText QwtText;
#endif

QwtPlotSpectroCurve* QwtPlotSpectroCurve_new();
QwtPlotSpectroCurve* QwtPlotSpectroCurve_new2(QwtText* title);
QwtPlotSpectroCurve* QwtPlotSpectroCurve_new3(struct miqt_string title);
void QwtPlotSpectroCurve_virtbase(QwtPlotSpectroCurve* src, QwtPlotSeriesItem** outptr_QwtPlotSeriesItem);
int QwtPlotSpectroCurve_rtti(const QwtPlotSpectroCurve* self);
void QwtPlotSpectroCurve_setPaintAttribute(QwtPlotSpectroCurve* self, int param1);
bool QwtPlotSpectroCurve_testPaintAttribute(const QwtPlotSpectroCurve* self, int param1);
void QwtPlotSpectroCurve_setSamples(QwtPlotSpectroCurve* self, struct miqt_array /* of QwtPoint3D* */  samples);
void QwtPlotSpectroCurve_setColorMap(QwtPlotSpectroCurve* self, QwtColorMap* colorMap);
QwtColorMap* QwtPlotSpectroCurve_colorMap(const QwtPlotSpectroCurve* self);
void QwtPlotSpectroCurve_setColorRange(QwtPlotSpectroCurve* self, QwtInterval* colorRange);
QwtInterval* QwtPlotSpectroCurve_colorRange(const QwtPlotSpectroCurve* self);
void QwtPlotSpectroCurve_setPenWidth(QwtPlotSpectroCurve* self, double penWidth);
double QwtPlotSpectroCurve_penWidth(const QwtPlotSpectroCurve* self);
void QwtPlotSpectroCurve_setPaintAttribute2(QwtPlotSpectroCurve* self, int param1, bool on);

void QwtPlotSpectroCurve_delete(QwtPlotSpectroCurve* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
