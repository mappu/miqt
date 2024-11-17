#pragma once
#ifndef MIQT_QT6_GEN_QPAINTENGINE_H
#define MIQT_QT6_GEN_QPAINTENGINE_H

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
class QSize;
class QTextItem;
class QTransform;
#else
typedef struct QBrush QBrush;
typedef struct QFont QFont;
typedef struct QImage QImage;
typedef struct QLine QLine;
typedef struct QLineF QLineF;
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
typedef struct QSize QSize;
typedef struct QTextItem QTextItem;
typedef struct QTransform QTransform;
#endif

double QTextItem_Descent(const QTextItem* self);
double QTextItem_Ascent(const QTextItem* self);
double QTextItem_Width(const QTextItem* self);
int QTextItem_RenderFlags(const QTextItem* self);
struct miqt_string QTextItem_Text(const QTextItem* self);
QFont* QTextItem_Font(const QTextItem* self);
void QTextItem_Delete(QTextItem* self);

bool QPaintEngine_IsActive(const QPaintEngine* self);
void QPaintEngine_SetActive(QPaintEngine* self, bool newState);
bool QPaintEngine_Begin(QPaintEngine* self, QPaintDevice* pdev);
bool QPaintEngine_End(QPaintEngine* self);
void QPaintEngine_UpdateState(QPaintEngine* self, QPaintEngineState* state);
void QPaintEngine_DrawRects(QPaintEngine* self, QRect* rects, int rectCount);
void QPaintEngine_DrawRects2(QPaintEngine* self, QRectF* rects, int rectCount);
void QPaintEngine_DrawLines(QPaintEngine* self, QLine* lines, int lineCount);
void QPaintEngine_DrawLines2(QPaintEngine* self, QLineF* lines, int lineCount);
void QPaintEngine_DrawEllipse(QPaintEngine* self, QRectF* r);
void QPaintEngine_DrawEllipseWithQRect(QPaintEngine* self, QRect* r);
void QPaintEngine_DrawPath(QPaintEngine* self, QPainterPath* path);
void QPaintEngine_DrawPoints(QPaintEngine* self, QPointF* points, int pointCount);
void QPaintEngine_DrawPoints2(QPaintEngine* self, QPoint* points, int pointCount);
void QPaintEngine_DrawPolygon(QPaintEngine* self, QPointF* points, int pointCount, int mode);
void QPaintEngine_DrawPolygon2(QPaintEngine* self, QPoint* points, int pointCount, int mode);
void QPaintEngine_DrawPixmap(QPaintEngine* self, QRectF* r, QPixmap* pm, QRectF* sr);
void QPaintEngine_DrawTextItem(QPaintEngine* self, QPointF* p, QTextItem* textItem);
void QPaintEngine_DrawTiledPixmap(QPaintEngine* self, QRectF* r, QPixmap* pixmap, QPointF* s);
void QPaintEngine_DrawImage(QPaintEngine* self, QRectF* r, QImage* pm, QRectF* sr);
void QPaintEngine_SetPaintDevice(QPaintEngine* self, QPaintDevice* device);
QPaintDevice* QPaintEngine_PaintDevice(const QPaintEngine* self);
void QPaintEngine_SetSystemClip(QPaintEngine* self, QRegion* baseClip);
QRegion* QPaintEngine_SystemClip(const QPaintEngine* self);
void QPaintEngine_SetSystemRect(QPaintEngine* self, QRect* rect);
QRect* QPaintEngine_SystemRect(const QPaintEngine* self);
QPoint* QPaintEngine_CoordinateOffset(const QPaintEngine* self);
int QPaintEngine_Type(const QPaintEngine* self);
void QPaintEngine_FixNegRect(QPaintEngine* self, int* x, int* y, int* w, int* h);
bool QPaintEngine_TestDirty(QPaintEngine* self, int df);
void QPaintEngine_SetDirty(QPaintEngine* self, int df);
void QPaintEngine_ClearDirty(QPaintEngine* self, int df);
bool QPaintEngine_HasFeature(const QPaintEngine* self, int feature);
QPainter* QPaintEngine_Painter(const QPaintEngine* self);
void QPaintEngine_SyncState(QPaintEngine* self);
bool QPaintEngine_IsExtended(const QPaintEngine* self);
QPixmap* QPaintEngine_CreatePixmap(QPaintEngine* self, QSize* size);
QPixmap* QPaintEngine_CreatePixmapFromImage(QPaintEngine* self, QImage* image);
void QPaintEngine_DrawImage4(QPaintEngine* self, QRectF* r, QImage* pm, QRectF* sr, int flags);
QPixmap* QPaintEngine_CreatePixmapFromImage2(QPaintEngine* self, QImage* image, int flags);
void QPaintEngine_Delete(QPaintEngine* self);

int QPaintEngineState_State(const QPaintEngineState* self);
QPen* QPaintEngineState_Pen(const QPaintEngineState* self);
QBrush* QPaintEngineState_Brush(const QPaintEngineState* self);
QPointF* QPaintEngineState_BrushOrigin(const QPaintEngineState* self);
QBrush* QPaintEngineState_BackgroundBrush(const QPaintEngineState* self);
int QPaintEngineState_BackgroundMode(const QPaintEngineState* self);
QFont* QPaintEngineState_Font(const QPaintEngineState* self);
QTransform* QPaintEngineState_Transform(const QPaintEngineState* self);
int QPaintEngineState_ClipOperation(const QPaintEngineState* self);
QRegion* QPaintEngineState_ClipRegion(const QPaintEngineState* self);
QPainterPath* QPaintEngineState_ClipPath(const QPaintEngineState* self);
bool QPaintEngineState_IsClipEnabled(const QPaintEngineState* self);
int QPaintEngineState_RenderHints(const QPaintEngineState* self);
int QPaintEngineState_CompositionMode(const QPaintEngineState* self);
double QPaintEngineState_Opacity(const QPaintEngineState* self);
QPainter* QPaintEngineState_Painter(const QPaintEngineState* self);
bool QPaintEngineState_BrushNeedsResolving(const QPaintEngineState* self);
bool QPaintEngineState_PenNeedsResolving(const QPaintEngineState* self);
void QPaintEngineState_Delete(QPaintEngineState* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
