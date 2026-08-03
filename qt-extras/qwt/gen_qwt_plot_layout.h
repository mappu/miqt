#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_LAYOUT_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_LAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRectF;
class QSize;
class QwtPlot;
class QwtPlotLayout;
#else
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QwtPlot QwtPlot;
typedef struct QwtPlotLayout QwtPlotLayout;
#endif

QwtPlotLayout* QwtPlotLayout_new();
void QwtPlotLayout_setCanvasMargin(QwtPlotLayout* self, int margin);
int QwtPlotLayout_canvasMargin(const QwtPlotLayout* self, int axisId);
void QwtPlotLayout_setAlignCanvasToScales(QwtPlotLayout* self, bool alignCanvasToScales);
void QwtPlotLayout_setAlignCanvasToScale(QwtPlotLayout* self, int axisId, bool param2);
bool QwtPlotLayout_alignCanvasToScale(const QwtPlotLayout* self, int axisId);
void QwtPlotLayout_setSpacing(QwtPlotLayout* self, int spacing);
int QwtPlotLayout_spacing(const QwtPlotLayout* self);
void QwtPlotLayout_setLegendPosition(QwtPlotLayout* self, int pos, double ratio);
void QwtPlotLayout_setLegendPositionWithPos(QwtPlotLayout* self, int pos);
int QwtPlotLayout_legendPosition(const QwtPlotLayout* self);
void QwtPlotLayout_setLegendRatio(QwtPlotLayout* self, double ratio);
double QwtPlotLayout_legendRatio(const QwtPlotLayout* self);
QSize* QwtPlotLayout_minimumSizeHint(const QwtPlotLayout* self, QwtPlot* param1);
void QwtPlotLayout_activate(QwtPlotLayout* self, QwtPlot* param1, QRectF* plotRect, int options);
void QwtPlotLayout_invalidate(QwtPlotLayout* self);
QRectF* QwtPlotLayout_titleRect(const QwtPlotLayout* self);
QRectF* QwtPlotLayout_footerRect(const QwtPlotLayout* self);
QRectF* QwtPlotLayout_legendRect(const QwtPlotLayout* self);
QRectF* QwtPlotLayout_scaleRect(const QwtPlotLayout* self, int axis);
QRectF* QwtPlotLayout_canvasRect(const QwtPlotLayout* self);
void QwtPlotLayout_operatorAssign(QwtPlotLayout* self, QwtPlotLayout* param1);
void QwtPlotLayout_setCanvasMargin2(QwtPlotLayout* self, int margin, int axis);

bool QwtPlotLayout_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtPlotLayout_virtualbase_minimumSizeHint(const void* self, QwtPlot* param1);
bool QwtPlotLayout_override_virtual_activate(void* self, intptr_t slot);
void QwtPlotLayout_virtualbase_activate(void* self, QwtPlot* param1, QRectF* plotRect, int options);
bool QwtPlotLayout_override_virtual_invalidate(void* self, intptr_t slot);
void QwtPlotLayout_virtualbase_invalidate(void* self);

void QwtPlotLayout_protectedbase_setTitleRect(bool* _dynamic_cast_ok, void* self, QRectF* titleRect);
void QwtPlotLayout_protectedbase_setFooterRect(bool* _dynamic_cast_ok, void* self, QRectF* footerRect);
void QwtPlotLayout_protectedbase_setLegendRect(bool* _dynamic_cast_ok, void* self, QRectF* legendRect);
void QwtPlotLayout_protectedbase_setScaleRect(bool* _dynamic_cast_ok, void* self, int axis, QRectF* param2);
void QwtPlotLayout_protectedbase_setCanvasRect(bool* _dynamic_cast_ok, void* self, QRectF* canvasRect);
QRectF* QwtPlotLayout_protectedbase_layoutLegend(bool* _dynamic_cast_ok, const void* self, int options, QRectF* param2);
QRectF* QwtPlotLayout_protectedbase_alignLegend(bool* _dynamic_cast_ok, const void* self, QRectF* canvasRect, QRectF* legendRect);
void QwtPlotLayout_protectedbase_expandLineBreaks(bool* _dynamic_cast_ok, const void* self, int options, QRectF* rect, int* dimTitle, int* dimFooter, int* dimAxes);
void QwtPlotLayout_protectedbase_alignScales(bool* _dynamic_cast_ok, const void* self, int options, QRectF* canvasRect, QRectF* scaleRect);

void QwtPlotLayout_delete(QwtPlotLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
