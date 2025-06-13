#pragma once
#ifndef MIQT_QT_GEN_QPAINTENGINE_H
#define MIQT_QT_GEN_QPAINTENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QFont;
class QImage;
class QLine;
class QLineF;
class QMatrix;
class QPaintDevice;
class QPaintEngine;
class QPaintEngineState;
class QPainter;
class QPainterPath;
class QPen;
class QPixmap;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QRegion;
class QTextItem;
class QTransform;
#else
typedef struct QBrush QBrush;
typedef struct QFont QFont;
typedef struct QImage QImage;
typedef struct QLine QLine;
typedef struct QLineF QLineF;
typedef struct QMatrix QMatrix;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEngineState QPaintEngineState;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPen QPen;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QTextItem QTextItem;
typedef struct QTransform QTransform;
#endif

double QTextItem_descent(const QTextItem* self);
double QTextItem_ascent(const QTextItem* self);
double QTextItem_width(const QTextItem* self);
int QTextItem_renderFlags(const QTextItem* self);
struct miqt_string QTextItem_text(const QTextItem* self);
QFont* QTextItem_font(const QTextItem* self);

void QTextItem_delete(QTextItem* self);

QPaintEngine* QPaintEngine_new();
QPaintEngine* QPaintEngine_new2(int features);
bool QPaintEngine_isActive(const QPaintEngine* self);
void QPaintEngine_setActive(QPaintEngine* self, bool newState);
bool QPaintEngine_begin(QPaintEngine* self, QPaintDevice* pdev);
bool QPaintEngine_end(QPaintEngine* self);
void QPaintEngine_updateState(QPaintEngine* self, QPaintEngineState* state);
void QPaintEngine_drawRects(QPaintEngine* self, QRect* rects, int rectCount);
void QPaintEngine_drawRects2(QPaintEngine* self, QRectF* rects, int rectCount);
void QPaintEngine_drawLines(QPaintEngine* self, QLine* lines, int lineCount);
void QPaintEngine_drawLines2(QPaintEngine* self, QLineF* lines, int lineCount);
void QPaintEngine_drawEllipse(QPaintEngine* self, QRectF* r);
void QPaintEngine_drawEllipseWithQRect(QPaintEngine* self, QRect* r);
void QPaintEngine_drawPath(QPaintEngine* self, QPainterPath* path);
void QPaintEngine_drawPoints(QPaintEngine* self, QPointF* points, int pointCount);
void QPaintEngine_drawPoints2(QPaintEngine* self, QPoint* points, int pointCount);
void QPaintEngine_drawPolygon(QPaintEngine* self, QPointF* points, int pointCount, int mode);
void QPaintEngine_drawPolygon2(QPaintEngine* self, QPoint* points, int pointCount, int mode);
void QPaintEngine_drawPixmap(QPaintEngine* self, QRectF* r, QPixmap* pm, QRectF* sr);
void QPaintEngine_drawTextItem(QPaintEngine* self, QPointF* p, QTextItem* textItem);
void QPaintEngine_drawTiledPixmap(QPaintEngine* self, QRectF* r, QPixmap* pixmap, QPointF* s);
void QPaintEngine_drawImage(QPaintEngine* self, QRectF* r, QImage* pm, QRectF* sr, int flags);
void QPaintEngine_setPaintDevice(QPaintEngine* self, QPaintDevice* device);
QPaintDevice* QPaintEngine_paintDevice(const QPaintEngine* self);
void QPaintEngine_setSystemClip(QPaintEngine* self, QRegion* baseClip);
QRegion* QPaintEngine_systemClip(const QPaintEngine* self);
void QPaintEngine_setSystemRect(QPaintEngine* self, QRect* rect);
QRect* QPaintEngine_systemRect(const QPaintEngine* self);
QPoint* QPaintEngine_coordinateOffset(const QPaintEngine* self);
int QPaintEngine_type(const QPaintEngine* self);
void QPaintEngine_fixNegRect(QPaintEngine* self, int* x, int* y, int* w, int* h);
bool QPaintEngine_testDirty(QPaintEngine* self, int df);
void QPaintEngine_setDirty(QPaintEngine* self, int df);
void QPaintEngine_clearDirty(QPaintEngine* self, int df);
bool QPaintEngine_hasFeature(const QPaintEngine* self, int feature);
QPainter* QPaintEngine_painter(const QPaintEngine* self);
void QPaintEngine_syncState(QPaintEngine* self);
bool QPaintEngine_isExtended(const QPaintEngine* self);

bool QPaintEngine_override_virtual_begin(void* self, intptr_t slot);
bool QPaintEngine_virtualbase_begin(void* self, QPaintDevice* pdev);
bool QPaintEngine_override_virtual_end(void* self, intptr_t slot);
bool QPaintEngine_virtualbase_end(void* self);
bool QPaintEngine_override_virtual_updateState(void* self, intptr_t slot);
void QPaintEngine_virtualbase_updateState(void* self, QPaintEngineState* state);
bool QPaintEngine_override_virtual_drawRects(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawRects(void* self, QRect* rects, int rectCount);
bool QPaintEngine_override_virtual_drawRects2(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawRects2(void* self, QRectF* rects, int rectCount);
bool QPaintEngine_override_virtual_drawLines(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawLines(void* self, QLine* lines, int lineCount);
bool QPaintEngine_override_virtual_drawLines2(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawLines2(void* self, QLineF* lines, int lineCount);
bool QPaintEngine_override_virtual_drawEllipse(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawEllipse(void* self, QRectF* r);
bool QPaintEngine_override_virtual_drawEllipseWithQRect(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawEllipseWithQRect(void* self, QRect* r);
bool QPaintEngine_override_virtual_drawPath(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawPath(void* self, QPainterPath* path);
bool QPaintEngine_override_virtual_drawPoints(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawPoints(void* self, QPointF* points, int pointCount);
bool QPaintEngine_override_virtual_drawPoints2(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawPoints2(void* self, QPoint* points, int pointCount);
bool QPaintEngine_override_virtual_drawPolygon(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawPolygon(void* self, QPointF* points, int pointCount, int mode);
bool QPaintEngine_override_virtual_drawPolygon2(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawPolygon2(void* self, QPoint* points, int pointCount, int mode);
bool QPaintEngine_override_virtual_drawPixmap(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawPixmap(void* self, QRectF* r, QPixmap* pm, QRectF* sr);
bool QPaintEngine_override_virtual_drawTextItem(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawTextItem(void* self, QPointF* p, QTextItem* textItem);
bool QPaintEngine_override_virtual_drawTiledPixmap(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawTiledPixmap(void* self, QRectF* r, QPixmap* pixmap, QPointF* s);
bool QPaintEngine_override_virtual_drawImage(void* self, intptr_t slot);
void QPaintEngine_virtualbase_drawImage(void* self, QRectF* r, QImage* pm, QRectF* sr, int flags);
bool QPaintEngine_override_virtual_coordinateOffset(void* self, intptr_t slot);
QPoint* QPaintEngine_virtualbase_coordinateOffset(const void* self);
bool QPaintEngine_override_virtual_type(void* self, intptr_t slot);
int QPaintEngine_virtualbase_type(const void* self);

void QPaintEngine_delete(QPaintEngine* self);

int QPaintEngineState_state(const QPaintEngineState* self);
QPen* QPaintEngineState_pen(const QPaintEngineState* self);
QBrush* QPaintEngineState_brush(const QPaintEngineState* self);
QPointF* QPaintEngineState_brushOrigin(const QPaintEngineState* self);
QBrush* QPaintEngineState_backgroundBrush(const QPaintEngineState* self);
int QPaintEngineState_backgroundMode(const QPaintEngineState* self);
QFont* QPaintEngineState_font(const QPaintEngineState* self);
QMatrix* QPaintEngineState_matrix(const QPaintEngineState* self);
QTransform* QPaintEngineState_transform(const QPaintEngineState* self);
int QPaintEngineState_clipOperation(const QPaintEngineState* self);
QRegion* QPaintEngineState_clipRegion(const QPaintEngineState* self);
QPainterPath* QPaintEngineState_clipPath(const QPaintEngineState* self);
bool QPaintEngineState_isClipEnabled(const QPaintEngineState* self);
int QPaintEngineState_renderHints(const QPaintEngineState* self);
int QPaintEngineState_compositionMode(const QPaintEngineState* self);
double QPaintEngineState_opacity(const QPaintEngineState* self);
QPainter* QPaintEngineState_painter(const QPaintEngineState* self);
bool QPaintEngineState_brushNeedsResolving(const QPaintEngineState* self);
bool QPaintEngineState_penNeedsResolving(const QPaintEngineState* self);

void QPaintEngineState_delete(QPaintEngineState* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
