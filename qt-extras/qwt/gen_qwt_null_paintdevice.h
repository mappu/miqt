#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_NULL_PAINTDEVICE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_NULL_PAINTDEVICE_H

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
class QLineF;
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
class QTextItem;
class QwtNullPaintDevice;
#else
typedef struct QImage QImage;
typedef struct QLine QLine;
typedef struct QLineF QLineF;
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
typedef struct QTextItem QTextItem;
typedef struct QwtNullPaintDevice QwtNullPaintDevice;
#endif

QwtNullPaintDevice* QwtNullPaintDevice_new();
void QwtNullPaintDevice_virtbase(QwtNullPaintDevice* src, QPaintDevice** outptr_QPaintDevice);
void QwtNullPaintDevice_setMode(QwtNullPaintDevice* self, int mode);
int QwtNullPaintDevice_mode(const QwtNullPaintDevice* self);
QPaintEngine* QwtNullPaintDevice_paintEngine(const QwtNullPaintDevice* self);
int QwtNullPaintDevice_metric(const QwtNullPaintDevice* self, int param1);
void QwtNullPaintDevice_drawRects(QwtNullPaintDevice* self, QRect* param1, int param2);
void QwtNullPaintDevice_drawRects2(QwtNullPaintDevice* self, QRectF* param1, int param2);
void QwtNullPaintDevice_drawLines(QwtNullPaintDevice* self, QLine* param1, int param2);
void QwtNullPaintDevice_drawLines2(QwtNullPaintDevice* self, QLineF* param1, int param2);
void QwtNullPaintDevice_drawEllipse(QwtNullPaintDevice* self, QRectF* param1);
void QwtNullPaintDevice_drawEllipseWithQRect(QwtNullPaintDevice* self, QRect* param1);
void QwtNullPaintDevice_drawPath(QwtNullPaintDevice* self, QPainterPath* param1);
void QwtNullPaintDevice_drawPoints(QwtNullPaintDevice* self, QPointF* param1, int param2);
void QwtNullPaintDevice_drawPoints2(QwtNullPaintDevice* self, QPoint* param1, int param2);
void QwtNullPaintDevice_drawPolygon(QwtNullPaintDevice* self, QPointF* param1, int param2, int param3);
void QwtNullPaintDevice_drawPolygon2(QwtNullPaintDevice* self, QPoint* param1, int param2, int param3);
void QwtNullPaintDevice_drawPixmap(QwtNullPaintDevice* self, QRectF* param1, QPixmap* param2, QRectF* param3);
void QwtNullPaintDevice_drawTextItem(QwtNullPaintDevice* self, QPointF* param1, QTextItem* param2);
void QwtNullPaintDevice_drawTiledPixmap(QwtNullPaintDevice* self, QRectF* param1, QPixmap* param2, QPointF* param3);
void QwtNullPaintDevice_drawImage(QwtNullPaintDevice* self, QRectF* param1, QImage* param2, QRectF* param3, int param4);
void QwtNullPaintDevice_updateState(QwtNullPaintDevice* self, QPaintEngineState* param1);
QSize* QwtNullPaintDevice_sizeMetrics(const QwtNullPaintDevice* self);

bool QwtNullPaintDevice_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtNullPaintDevice_virtualbase_paintEngine(const void* self);
bool QwtNullPaintDevice_override_virtual_metric(void* self, intptr_t slot);
int QwtNullPaintDevice_virtualbase_metric(const void* self, int param1);
bool QwtNullPaintDevice_override_virtual_drawRects(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawRects(void* self, QRect* param1, int param2);
bool QwtNullPaintDevice_override_virtual_drawRects2(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawRects2(void* self, QRectF* param1, int param2);
bool QwtNullPaintDevice_override_virtual_drawLines(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawLines(void* self, QLine* param1, int param2);
bool QwtNullPaintDevice_override_virtual_drawLines2(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawLines2(void* self, QLineF* param1, int param2);
bool QwtNullPaintDevice_override_virtual_drawEllipse(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawEllipse(void* self, QRectF* param1);
bool QwtNullPaintDevice_override_virtual_drawEllipseWithQRect(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawEllipseWithQRect(void* self, QRect* param1);
bool QwtNullPaintDevice_override_virtual_drawPath(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawPath(void* self, QPainterPath* param1);
bool QwtNullPaintDevice_override_virtual_drawPoints(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawPoints(void* self, QPointF* param1, int param2);
bool QwtNullPaintDevice_override_virtual_drawPoints2(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawPoints2(void* self, QPoint* param1, int param2);
bool QwtNullPaintDevice_override_virtual_drawPolygon(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawPolygon(void* self, QPointF* param1, int param2, int param3);
bool QwtNullPaintDevice_override_virtual_drawPolygon2(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawPolygon2(void* self, QPoint* param1, int param2, int param3);
bool QwtNullPaintDevice_override_virtual_drawPixmap(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawPixmap(void* self, QRectF* param1, QPixmap* param2, QRectF* param3);
bool QwtNullPaintDevice_override_virtual_drawTextItem(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawTextItem(void* self, QPointF* param1, QTextItem* param2);
bool QwtNullPaintDevice_override_virtual_drawTiledPixmap(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawTiledPixmap(void* self, QRectF* param1, QPixmap* param2, QPointF* param3);
bool QwtNullPaintDevice_override_virtual_drawImage(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_drawImage(void* self, QRectF* param1, QImage* param2, QRectF* param3, int param4);
bool QwtNullPaintDevice_override_virtual_updateState(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_updateState(void* self, QPaintEngineState* param1);
bool QwtNullPaintDevice_override_virtual_sizeMetrics(void* self, intptr_t slot);
QSize* QwtNullPaintDevice_virtualbase_sizeMetrics(const void* self);
bool QwtNullPaintDevice_override_virtual_devType(void* self, intptr_t slot);
int QwtNullPaintDevice_virtualbase_devType(const void* self);
bool QwtNullPaintDevice_override_virtual_initPainter(void* self, intptr_t slot);
void QwtNullPaintDevice_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtNullPaintDevice_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtNullPaintDevice_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtNullPaintDevice_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtNullPaintDevice_virtualbase_sharedPainter(const void* self);

void QwtNullPaintDevice_delete(QwtNullPaintDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
