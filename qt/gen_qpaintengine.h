#ifndef GEN_QPAINTENGINE_H
#define GEN_QPAINTENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QFont;
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

double QTextItem_Descent(QTextItem* self);
double QTextItem_Ascent(QTextItem* self);
double QTextItem_Width(QTextItem* self);
void QTextItem_Text(QTextItem* self, char** _out, int* _out_Strlen);
QFont* QTextItem_Font(QTextItem* self);
void QTextItem_Delete(QTextItem* self);

bool QPaintEngine_IsActive(QPaintEngine* self);
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
void QPaintEngine_DrawPixmap(QPaintEngine* self, QRectF* r, QPixmap* pm, QRectF* sr);
void QPaintEngine_DrawTextItem(QPaintEngine* self, QPointF* p, QTextItem* textItem);
void QPaintEngine_DrawTiledPixmap(QPaintEngine* self, QRectF* r, QPixmap* pixmap, QPointF* s);
void QPaintEngine_SetPaintDevice(QPaintEngine* self, QPaintDevice* device);
QPaintDevice* QPaintEngine_PaintDevice(QPaintEngine* self);
void QPaintEngine_SetSystemClip(QPaintEngine* self, QRegion* baseClip);
QRegion* QPaintEngine_SystemClip(QPaintEngine* self);
void QPaintEngine_SetSystemRect(QPaintEngine* self, QRect* rect);
QRect* QPaintEngine_SystemRect(QPaintEngine* self);
QPoint* QPaintEngine_CoordinateOffset(QPaintEngine* self);
void QPaintEngine_FixNegRect(QPaintEngine* self, int* x, int* y, int* w, int* h);
QPainter* QPaintEngine_Painter(QPaintEngine* self);
void QPaintEngine_SyncState(QPaintEngine* self);
bool QPaintEngine_IsExtended(QPaintEngine* self);
void QPaintEngine_Delete(QPaintEngine* self);

QPen* QPaintEngineState_Pen(QPaintEngineState* self);
QBrush* QPaintEngineState_Brush(QPaintEngineState* self);
QPointF* QPaintEngineState_BrushOrigin(QPaintEngineState* self);
QBrush* QPaintEngineState_BackgroundBrush(QPaintEngineState* self);
QFont* QPaintEngineState_Font(QPaintEngineState* self);
QMatrix* QPaintEngineState_Matrix(QPaintEngineState* self);
QTransform* QPaintEngineState_Transform(QPaintEngineState* self);
QRegion* QPaintEngineState_ClipRegion(QPaintEngineState* self);
QPainterPath* QPaintEngineState_ClipPath(QPaintEngineState* self);
bool QPaintEngineState_IsClipEnabled(QPaintEngineState* self);
double QPaintEngineState_Opacity(QPaintEngineState* self);
QPainter* QPaintEngineState_Painter(QPaintEngineState* self);
bool QPaintEngineState_BrushNeedsResolving(QPaintEngineState* self);
bool QPaintEngineState_PenNeedsResolving(QPaintEngineState* self);
void QPaintEngineState_Delete(QPaintEngineState* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
