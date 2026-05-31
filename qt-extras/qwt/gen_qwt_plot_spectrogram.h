#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_SPECTROGRAM_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_SPECTROGRAM_H

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
class QRect;
class QRectF;
class QSize;
class QSizeF;
class QwtColorMap;
class QwtGraphic;
class QwtInterval;
class QwtPlotItem;
class QwtPlotRasterItem;
class QwtPlotSpectrogram;
class QwtRasterData;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPen QPen;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QwtColorMap QwtColorMap;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtInterval QwtInterval;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtPlotRasterItem QwtPlotRasterItem;
typedef struct QwtPlotSpectrogram QwtPlotSpectrogram;
typedef struct QwtRasterData QwtRasterData;
#endif

QwtPlotSpectrogram* QwtPlotSpectrogram_new();
QwtPlotSpectrogram* QwtPlotSpectrogram_new2(struct miqt_string title);
void QwtPlotSpectrogram_virtbase(QwtPlotSpectrogram* src, QwtPlotRasterItem** outptr_QwtPlotRasterItem);
void QwtPlotSpectrogram_setDisplayMode(QwtPlotSpectrogram* self, int param1);
bool QwtPlotSpectrogram_testDisplayMode(const QwtPlotSpectrogram* self, int param1);
void QwtPlotSpectrogram_setData(QwtPlotSpectrogram* self, QwtRasterData* data);
QwtRasterData* QwtPlotSpectrogram_data(const QwtPlotSpectrogram* self);
QwtRasterData* QwtPlotSpectrogram_data2(QwtPlotSpectrogram* self);
void QwtPlotSpectrogram_setColorMap(QwtPlotSpectrogram* self, QwtColorMap* colorMap);
QwtColorMap* QwtPlotSpectrogram_colorMap(const QwtPlotSpectrogram* self);
QwtInterval* QwtPlotSpectrogram_interval(const QwtPlotSpectrogram* self, int param1);
QRectF* QwtPlotSpectrogram_pixelHint(const QwtPlotSpectrogram* self, QRectF* param1);
void QwtPlotSpectrogram_setDefaultContourPen(QwtPlotSpectrogram* self, QColor* param1);
void QwtPlotSpectrogram_setDefaultContourPenWithDefaultContourPen(QwtPlotSpectrogram* self, QPen* defaultContourPen);
QPen* QwtPlotSpectrogram_defaultContourPen(const QwtPlotSpectrogram* self);
QPen* QwtPlotSpectrogram_contourPen(const QwtPlotSpectrogram* self, double level);
void QwtPlotSpectrogram_setConrecFlag(QwtPlotSpectrogram* self, int param1, bool on);
bool QwtPlotSpectrogram_testConrecFlag(const QwtPlotSpectrogram* self, int param1);
void QwtPlotSpectrogram_setContourLevels(QwtPlotSpectrogram* self, struct miqt_array /* of double */  contourLevels);
struct miqt_array /* of double */  QwtPlotSpectrogram_contourLevels(const QwtPlotSpectrogram* self);
int QwtPlotSpectrogram_rtti(const QwtPlotSpectrogram* self);
QSize* QwtPlotSpectrogram_contourRasterSize(const QwtPlotSpectrogram* self, QRectF* param1, QRect* param2);
void QwtPlotSpectrogram_setDisplayMode2(QwtPlotSpectrogram* self, int param1, bool on);
void QwtPlotSpectrogram_setDefaultContourPen2(QwtPlotSpectrogram* self, QColor* param1, double width);
void QwtPlotSpectrogram_setDefaultContourPen3(QwtPlotSpectrogram* self, QColor* param1, double width, int param3);

void QwtPlotSpectrogram_delete(QwtPlotSpectrogram* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
