#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_ITEM_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_ITEM_H

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
class QSize;
class QSizeF;
class QwtGraphic;
class QwtLegendData;
class QwtPlot;
class QwtPlotItem;
class QwtScaleDiv;
class QwtText;
#else
typedef struct QBrush QBrush;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtLegendData QwtLegendData;
typedef struct QwtPlot QwtPlot;
typedef struct QwtPlotItem QwtPlotItem;
typedef struct QwtScaleDiv QwtScaleDiv;
typedef struct QwtText QwtText;
#endif

void QwtPlotItem_attach(QwtPlotItem* self, QwtPlot* plot);
void QwtPlotItem_detach(QwtPlotItem* self);
QwtPlot* QwtPlotItem_plot(const QwtPlotItem* self);
void QwtPlotItem_setTitle(QwtPlotItem* self, struct miqt_string title);
void QwtPlotItem_setTitleWithTitle(QwtPlotItem* self, QwtText* title);
QwtText* QwtPlotItem_title(const QwtPlotItem* self);
int QwtPlotItem_rtti(const QwtPlotItem* self);
void QwtPlotItem_setItemAttribute(QwtPlotItem* self, int param1);
bool QwtPlotItem_testItemAttribute(const QwtPlotItem* self, int param1);
void QwtPlotItem_setItemInterest(QwtPlotItem* self, int param1);
bool QwtPlotItem_testItemInterest(const QwtPlotItem* self, int param1);
void QwtPlotItem_setRenderHint(QwtPlotItem* self, int param1);
bool QwtPlotItem_testRenderHint(const QwtPlotItem* self, int param1);
void QwtPlotItem_setRenderThreadCount(QwtPlotItem* self, unsigned int numThreads);
unsigned int QwtPlotItem_renderThreadCount(const QwtPlotItem* self);
void QwtPlotItem_setLegendIconSize(QwtPlotItem* self, QSize* legendIconSize);
QSize* QwtPlotItem_legendIconSize(const QwtPlotItem* self);
double QwtPlotItem_z(const QwtPlotItem* self);
void QwtPlotItem_setZ(QwtPlotItem* self, double z);
void QwtPlotItem_show(QwtPlotItem* self);
void QwtPlotItem_hide(QwtPlotItem* self);
void QwtPlotItem_setVisible(QwtPlotItem* self, bool visible);
bool QwtPlotItem_isVisible(const QwtPlotItem* self);
void QwtPlotItem_setAxes(QwtPlotItem* self, int xAxis, int yAxis);
void QwtPlotItem_setXAxis(QwtPlotItem* self, int axis);
int QwtPlotItem_xAxis(const QwtPlotItem* self);
void QwtPlotItem_setYAxis(QwtPlotItem* self, int axis);
int QwtPlotItem_yAxis(const QwtPlotItem* self);
void QwtPlotItem_itemChanged(QwtPlotItem* self);
void QwtPlotItem_legendChanged(QwtPlotItem* self);
QRectF* QwtPlotItem_boundingRect(const QwtPlotItem* self);
void QwtPlotItem_updateScaleDiv(QwtPlotItem* self, QwtScaleDiv* param1, QwtScaleDiv* param2);
void QwtPlotItem_updateLegend(QwtPlotItem* self, QwtPlotItem* param1, struct miqt_array /* of QwtLegendData* */  param2);
struct miqt_array /* of QwtLegendData* */  QwtPlotItem_legendData(const QwtPlotItem* self);
QwtGraphic* QwtPlotItem_legendIcon(const QwtPlotItem* self, int index, QSizeF* param2);
void QwtPlotItem_setItemAttribute2(QwtPlotItem* self, int param1, bool on);
void QwtPlotItem_setItemInterest2(QwtPlotItem* self, int param1, bool on);
void QwtPlotItem_setRenderHint2(QwtPlotItem* self, int param1, bool on);

void QwtPlotItem_delete(QwtPlotItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
