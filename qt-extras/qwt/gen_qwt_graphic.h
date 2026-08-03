#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_GRAPHIC_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_GRAPHIC_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QImage;
class QLine;
class QPaintDevice;
class QPaintEngine;
class QPaintEngineState;
class QPainter;
class QPainterPath;
class QPixmap;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QSize;
class QSizeF;
class QTextItem;
class QwtGraphic;
class QwtNullPaintDevice;
#else
typedef struct QImage QImage;
typedef struct QLine QLine;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEngineState QPaintEngineState;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTextItem QTextItem;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtNullPaintDevice QwtNullPaintDevice;
#endif

QwtGraphic* QwtGraphic_new();
QwtGraphic* QwtGraphic_new2(QwtGraphic* param1);
void QwtGraphic_virtbase(QwtGraphic* src, QwtNullPaintDevice** outptr_QwtNullPaintDevice);
void QwtGraphic_operatorAssign(QwtGraphic* self, QwtGraphic* param1);
void QwtGraphic_reset(QwtGraphic* self);
bool QwtGraphic_isNull(const QwtGraphic* self);
bool QwtGraphic_isEmpty(const QwtGraphic* self);
void QwtGraphic_render(const QwtGraphic* self, QPainter* param1);
void QwtGraphic_render2(const QwtGraphic* self, QPainter* param1, QSizeF* param2);
void QwtGraphic_render3(const QwtGraphic* self, QPainter* param1, QRectF* param2);
void QwtGraphic_render4(const QwtGraphic* self, QPainter* param1, QPointF* param2);
QPixmap* QwtGraphic_toPixmap(const QwtGraphic* self);
QPixmap* QwtGraphic_toPixmapWithQSize(const QwtGraphic* self, QSize* param1);
QImage* QwtGraphic_toImage(const QwtGraphic* self);
QImage* QwtGraphic_toImageWithQSize(const QwtGraphic* self, QSize* param1);
QRectF* QwtGraphic_scaledBoundingRect(const QwtGraphic* self, double sx, double sy);
QRectF* QwtGraphic_boundingRect(const QwtGraphic* self);
QRectF* QwtGraphic_controlPointRect(const QwtGraphic* self);
void QwtGraphic_setDefaultSize(QwtGraphic* self, QSizeF* defaultSize);
QSizeF* QwtGraphic_defaultSize(const QwtGraphic* self);
void QwtGraphic_setRenderHint(QwtGraphic* self, int param1);
bool QwtGraphic_testRenderHint(const QwtGraphic* self, int param1);
QSize* QwtGraphic_sizeMetrics(const QwtGraphic* self);
void QwtGraphic_drawPath(QwtGraphic* self, QPainterPath* param1);
void QwtGraphic_drawPixmap(QwtGraphic* self, QRectF* param1, QPixmap* param2, QRectF* param3);
void QwtGraphic_drawImage(QwtGraphic* self, QRectF* param1, QImage* param2, QRectF* param3, int param4);
void QwtGraphic_updateState(QwtGraphic* self, QPaintEngineState* state);
void QwtGraphic_render5(const QwtGraphic* self, QPainter* param1, QSizeF* param2, int param3);
void QwtGraphic_render6(const QwtGraphic* self, QPainter* param1, QRectF* param2, int param3);
void QwtGraphic_render7(const QwtGraphic* self, QPainter* param1, QPointF* param2, int param3);
QPixmap* QwtGraphic_toPixmap2(const QwtGraphic* self, QSize* param1, int param2);
QImage* QwtGraphic_toImage2(const QwtGraphic* self, QSize* param1, int param2);
void QwtGraphic_setRenderHint2(QwtGraphic* self, int param1, bool on);

bool QwtGraphic_override_virtual_sizeMetrics(void* self, intptr_t slot);
QSize* QwtGraphic_virtualbase_sizeMetrics(const void* self);
bool QwtGraphic_override_virtual_drawPath(void* self, intptr_t slot);
void QwtGraphic_virtualbase_drawPath(void* self, QPainterPath* param1);
bool QwtGraphic_override_virtual_drawPixmap(void* self, intptr_t slot);
void QwtGraphic_virtualbase_drawPixmap(void* self, QRectF* param1, QPixmap* param2, QRectF* param3);
bool QwtGraphic_override_virtual_drawImage(void* self, intptr_t slot);
void QwtGraphic_virtualbase_drawImage(void* self, QRectF* param1, QImage* param2, QRectF* param3, int param4);
bool QwtGraphic_override_virtual_updateState(void* self, intptr_t slot);
void QwtGraphic_virtualbase_updateState(void* self, QPaintEngineState* state);
bool QwtGraphic_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtGraphic_virtualbase_paintEngine(const void* self);
bool QwtGraphic_override_virtual_metric(void* self, intptr_t slot);
int QwtGraphic_virtualbase_metric(const void* self, int param1);
bool QwtGraphic_override_virtual_drawRects(void* self, intptr_t slot);
void QwtGraphic_virtualbase_drawRects(void* self, QRect* param1, int param2);
bool QwtGraphic_override_virtual_drawLines(void* self, intptr_t slot);
void QwtGraphic_virtualbase_drawLines(void* self, QLine* param1, int param2);
bool QwtGraphic_override_virtual_drawEllipse(void* self, intptr_t slot);
void QwtGraphic_virtualbase_drawEllipse(void* self, QRectF* param1);
bool QwtGraphic_override_virtual_drawPoints(void* self, intptr_t slot);
void QwtGraphic_virtualbase_drawPoints(void* self, QPointF* param1, int param2);
bool QwtGraphic_override_virtual_drawPolygon(void* self, intptr_t slot);
void QwtGraphic_virtualbase_drawPolygon(void* self, QPointF* param1, int param2, int param3);
bool QwtGraphic_override_virtual_drawTextItem(void* self, intptr_t slot);
void QwtGraphic_virtualbase_drawTextItem(void* self, QPointF* param1, QTextItem* param2);
bool QwtGraphic_override_virtual_drawTiledPixmap(void* self, intptr_t slot);
void QwtGraphic_virtualbase_drawTiledPixmap(void* self, QRectF* param1, QPixmap* param2, QPointF* param3);
bool QwtGraphic_override_virtual_devType(void* self, intptr_t slot);
int QwtGraphic_virtualbase_devType(const void* self);
bool QwtGraphic_override_virtual_initPainter(void* self, intptr_t slot);
void QwtGraphic_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtGraphic_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtGraphic_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtGraphic_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtGraphic_virtualbase_sharedPainter(const void* self);

void QwtGraphic_delete(QwtGraphic* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
