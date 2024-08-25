#ifndef GEN_QPAINTER_H
#define GEN_QPAINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QColor;
class QFont;
class QFontInfo;
class QFontMetrics;
class QGlyphRun;
class QImage;
class QLine;
class QLineF;
class QMatrix;
class QPaintDevice;
class QPaintEngine;
class QPainter;
class QPainterPath;
class QPen;
class QPicture;
class QPixmap;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QRegion;
class QStaticText;
class QTextItem;
class QTextOption;
class QTransform;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QFontInfo QFontInfo;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGlyphRun QGlyphRun;
typedef struct QImage QImage;
typedef struct QLine QLine;
typedef struct QLineF QLineF;
typedef struct QMatrix QMatrix;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPen QPen;
typedef struct QPicture QPicture;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QStaticText QStaticText;
typedef struct QTextItem QTextItem;
typedef struct QTextOption QTextOption;
typedef struct QTransform QTransform;
#endif

QPainter* QPainter_new();
QPainter* QPainter_new2(QPaintDevice* param1);
QPaintDevice* QPainter_Device(QPainter* self);
bool QPainter_Begin(QPainter* self, QPaintDevice* param1);
bool QPainter_End(QPainter* self);
bool QPainter_IsActive(QPainter* self);
void QPainter_InitFrom(QPainter* self, QPaintDevice* device);
QFont* QPainter_Font(QPainter* self);
void QPainter_SetFont(QPainter* self, QFont* f);
QFontMetrics* QPainter_FontMetrics(QPainter* self);
QFontInfo* QPainter_FontInfo(QPainter* self);
void QPainter_SetPen(QPainter* self, QColor* color);
void QPainter_SetPenWithPen(QPainter* self, QPen* pen);
QPen* QPainter_Pen(QPainter* self);
void QPainter_SetBrush(QPainter* self, QBrush* brush);
QBrush* QPainter_Brush(QPainter* self);
QPoint* QPainter_BrushOrigin(QPainter* self);
void QPainter_SetBrushOrigin(QPainter* self, int x, int y);
void QPainter_SetBrushOriginWithBrushOrigin(QPainter* self, QPoint* brushOrigin);
void QPainter_SetBrushOrigin2(QPainter* self, QPointF* brushOrigin);
void QPainter_SetBackground(QPainter* self, QBrush* bg);
QBrush* QPainter_Background(QPainter* self);
double QPainter_Opacity(QPainter* self);
void QPainter_SetOpacity(QPainter* self, double opacity);
QRegion* QPainter_ClipRegion(QPainter* self);
QPainterPath* QPainter_ClipPath(QPainter* self);
void QPainter_SetClipping(QPainter* self, bool enable);
bool QPainter_HasClipping(QPainter* self);
QRectF* QPainter_ClipBoundingRect(QPainter* self);
void QPainter_Save(QPainter* self);
void QPainter_Restore(QPainter* self);
void QPainter_SetMatrix(QPainter* self, QMatrix* matrix);
QMatrix* QPainter_Matrix(QPainter* self);
QMatrix* QPainter_DeviceMatrix(QPainter* self);
void QPainter_ResetMatrix(QPainter* self);
void QPainter_SetTransform(QPainter* self, QTransform* transform);
QTransform* QPainter_Transform(QPainter* self);
QTransform* QPainter_DeviceTransform(QPainter* self);
void QPainter_ResetTransform(QPainter* self);
void QPainter_SetWorldMatrix(QPainter* self, QMatrix* matrix);
QMatrix* QPainter_WorldMatrix(QPainter* self);
QMatrix* QPainter_CombinedMatrix(QPainter* self);
void QPainter_SetMatrixEnabled(QPainter* self, bool enabled);
bool QPainter_MatrixEnabled(QPainter* self);
void QPainter_SetWorldTransform(QPainter* self, QTransform* matrix);
QTransform* QPainter_WorldTransform(QPainter* self);
QTransform* QPainter_CombinedTransform(QPainter* self);
void QPainter_SetWorldMatrixEnabled(QPainter* self, bool enabled);
bool QPainter_WorldMatrixEnabled(QPainter* self);
void QPainter_Scale(QPainter* self, double sx, double sy);
void QPainter_Shear(QPainter* self, double sh, double sv);
void QPainter_Rotate(QPainter* self, double a);
void QPainter_Translate(QPainter* self, QPointF* offset);
void QPainter_TranslateWithOffset(QPainter* self, QPoint* offset);
void QPainter_Translate2(QPainter* self, double dx, double dy);
QRect* QPainter_Window(QPainter* self);
void QPainter_SetWindow(QPainter* self, QRect* window);
void QPainter_SetWindow2(QPainter* self, int x, int y, int w, int h);
QRect* QPainter_Viewport(QPainter* self);
void QPainter_SetViewport(QPainter* self, QRect* viewport);
void QPainter_SetViewport2(QPainter* self, int x, int y, int w, int h);
void QPainter_SetViewTransformEnabled(QPainter* self, bool enable);
bool QPainter_ViewTransformEnabled(QPainter* self);
void QPainter_StrokePath(QPainter* self, QPainterPath* path, QPen* pen);
void QPainter_FillPath(QPainter* self, QPainterPath* path, QBrush* brush);
void QPainter_DrawPath(QPainter* self, QPainterPath* path);
void QPainter_DrawPoint(QPainter* self, QPointF* pt);
void QPainter_DrawPointWithQPoint(QPainter* self, QPoint* p);
void QPainter_DrawPoint2(QPainter* self, int x, int y);
void QPainter_DrawPoints(QPainter* self, QPointF* points, int pointCount);
void QPainter_DrawPoints2(QPainter* self, QPoint* points, int pointCount);
void QPainter_DrawLine(QPainter* self, QLineF* line);
void QPainter_DrawLineWithLine(QPainter* self, QLine* line);
void QPainter_DrawLine2(QPainter* self, int x1, int y1, int x2, int y2);
void QPainter_DrawLine3(QPainter* self, QPoint* p1, QPoint* p2);
void QPainter_DrawLine4(QPainter* self, QPointF* p1, QPointF* p2);
void QPainter_DrawLines(QPainter* self, QLineF* lines, int lineCount);
void QPainter_DrawLinesWithLines(QPainter* self, QLineF** lines, size_t lines_len);
void QPainter_DrawLines2(QPainter* self, QPointF* pointPairs, int lineCount);
void QPainter_DrawLinesWithPointPairs(QPainter* self, QPointF** pointPairs, size_t pointPairs_len);
void QPainter_DrawLines3(QPainter* self, QLine* lines, int lineCount);
void QPainter_DrawLines4(QPainter* self, QLine** lines, size_t lines_len);
void QPainter_DrawLines5(QPainter* self, QPoint* pointPairs, int lineCount);
void QPainter_DrawLines6(QPainter* self, QPoint** pointPairs, size_t pointPairs_len);
void QPainter_DrawRect(QPainter* self, QRectF* rect);
void QPainter_DrawRect2(QPainter* self, int x1, int y1, int w, int h);
void QPainter_DrawRectWithRect(QPainter* self, QRect* rect);
void QPainter_DrawRects(QPainter* self, QRectF* rects, int rectCount);
void QPainter_DrawRectsWithRectangles(QPainter* self, QRectF** rectangles, size_t rectangles_len);
void QPainter_DrawRects2(QPainter* self, QRect* rects, int rectCount);
void QPainter_DrawRects3(QPainter* self, QRect** rectangles, size_t rectangles_len);
void QPainter_DrawEllipse(QPainter* self, QRectF* r);
void QPainter_DrawEllipseWithQRect(QPainter* self, QRect* r);
void QPainter_DrawEllipse2(QPainter* self, int x, int y, int w, int h);
void QPainter_DrawEllipse3(QPainter* self, QPointF* center, double rx, double ry);
void QPainter_DrawEllipse4(QPainter* self, QPoint* center, int rx, int ry);
void QPainter_DrawPolyline(QPainter* self, QPointF* points, int pointCount);
void QPainter_DrawPolyline2(QPainter* self, QPoint* points, int pointCount);
void QPainter_DrawConvexPolygon(QPainter* self, QPointF* points, int pointCount);
void QPainter_DrawConvexPolygon2(QPainter* self, QPoint* points, int pointCount);
void QPainter_DrawArc(QPainter* self, QRectF* rect, int a, int alen);
void QPainter_DrawArc2(QPainter* self, QRect* param1, int a, int alen);
void QPainter_DrawArc3(QPainter* self, int x, int y, int w, int h, int a, int alen);
void QPainter_DrawPie(QPainter* self, QRectF* rect, int a, int alen);
void QPainter_DrawPie2(QPainter* self, int x, int y, int w, int h, int a, int alen);
void QPainter_DrawPie3(QPainter* self, QRect* param1, int a, int alen);
void QPainter_DrawChord(QPainter* self, QRectF* rect, int a, int alen);
void QPainter_DrawChord2(QPainter* self, int x, int y, int w, int h, int a, int alen);
void QPainter_DrawChord3(QPainter* self, QRect* param1, int a, int alen);
void QPainter_DrawRoundRect(QPainter* self, QRectF* r);
void QPainter_DrawRoundRect2(QPainter* self, int x, int y, int w, int h);
void QPainter_DrawRoundRectWithQRect(QPainter* self, QRect* r);
void QPainter_DrawTiledPixmap(QPainter* self, QRectF* rect, QPixmap* pm);
void QPainter_DrawTiledPixmap2(QPainter* self, int x, int y, int w, int h, QPixmap* param5);
void QPainter_DrawTiledPixmap3(QPainter* self, QRect* param1, QPixmap* param2);
void QPainter_DrawPicture(QPainter* self, QPointF* p, QPicture* picture);
void QPainter_DrawPicture2(QPainter* self, int x, int y, QPicture* picture);
void QPainter_DrawPicture3(QPainter* self, QPoint* p, QPicture* picture);
void QPainter_DrawPixmap(QPainter* self, QRectF* targetRect, QPixmap* pixmap, QRectF* sourceRect);
void QPainter_DrawPixmap2(QPainter* self, QRect* targetRect, QPixmap* pixmap, QRect* sourceRect);
void QPainter_DrawPixmap3(QPainter* self, int x, int y, int w, int h, QPixmap* pm, int sx, int sy, int sw, int sh);
void QPainter_DrawPixmap4(QPainter* self, int x, int y, QPixmap* pm, int sx, int sy, int sw, int sh);
void QPainter_DrawPixmap5(QPainter* self, QPointF* p, QPixmap* pm, QRectF* sr);
void QPainter_DrawPixmap6(QPainter* self, QPoint* p, QPixmap* pm, QRect* sr);
void QPainter_DrawPixmap7(QPainter* self, QPointF* p, QPixmap* pm);
void QPainter_DrawPixmap8(QPainter* self, QPoint* p, QPixmap* pm);
void QPainter_DrawPixmap9(QPainter* self, int x, int y, QPixmap* pm);
void QPainter_DrawPixmap10(QPainter* self, QRect* r, QPixmap* pm);
void QPainter_DrawPixmap11(QPainter* self, int x, int y, int w, int h, QPixmap* pm);
void QPainter_DrawImage(QPainter* self, QRectF* r, QImage* image);
void QPainter_DrawImage2(QPainter* self, QRect* r, QImage* image);
void QPainter_DrawImage3(QPainter* self, QPointF* p, QImage* image);
void QPainter_DrawImage4(QPainter* self, QPoint* p, QImage* image);
void QPainter_DrawGlyphRun(QPainter* self, QPointF* position, QGlyphRun* glyphRun);
void QPainter_DrawStaticText(QPainter* self, QPointF* topLeftPosition, QStaticText* staticText);
void QPainter_DrawStaticText2(QPainter* self, QPoint* topLeftPosition, QStaticText* staticText);
void QPainter_DrawStaticText3(QPainter* self, int left, int top, QStaticText* staticText);
void QPainter_DrawText(QPainter* self, QPointF* p, const char* s, size_t s_Strlen);
void QPainter_DrawText2(QPainter* self, QPoint* p, const char* s, size_t s_Strlen);
void QPainter_DrawText3(QPainter* self, int x, int y, const char* s, size_t s_Strlen);
void QPainter_DrawText4(QPainter* self, QPointF* p, const char* str, size_t str_Strlen, int tf, int justificationPadding);
void QPainter_DrawText5(QPainter* self, QRectF* r, int flags, const char* text, size_t text_Strlen);
void QPainter_DrawText6(QPainter* self, QRect* r, int flags, const char* text, size_t text_Strlen);
void QPainter_DrawText7(QPainter* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen);
void QPainter_DrawText8(QPainter* self, QRectF* r, const char* text, size_t text_Strlen);
QRectF* QPainter_BoundingRect(QPainter* self, QRectF* rect, int flags, const char* text, size_t text_Strlen);
QRect* QPainter_BoundingRect2(QPainter* self, QRect* rect, int flags, const char* text, size_t text_Strlen);
QRect* QPainter_BoundingRect3(QPainter* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen);
QRectF* QPainter_BoundingRect4(QPainter* self, QRectF* rect, const char* text, size_t text_Strlen);
void QPainter_DrawTextItem(QPainter* self, QPointF* p, QTextItem* ti);
void QPainter_DrawTextItem2(QPainter* self, int x, int y, QTextItem* ti);
void QPainter_DrawTextItem3(QPainter* self, QPoint* p, QTextItem* ti);
void QPainter_FillRect(QPainter* self, QRectF* param1, QBrush* param2);
void QPainter_FillRect2(QPainter* self, int x, int y, int w, int h, QBrush* param5);
void QPainter_FillRect3(QPainter* self, QRect* param1, QBrush* param2);
void QPainter_FillRect4(QPainter* self, QRectF* param1, QColor* color);
void QPainter_FillRect5(QPainter* self, int x, int y, int w, int h, QColor* color);
void QPainter_FillRect6(QPainter* self, QRect* param1, QColor* color);
void QPainter_EraseRect(QPainter* self, QRectF* param1);
void QPainter_EraseRect2(QPainter* self, int x, int y, int w, int h);
void QPainter_EraseRectWithQRect(QPainter* self, QRect* param1);
QPaintEngine* QPainter_PaintEngine(QPainter* self);
void QPainter_SetRedirected(QPaintDevice* device, QPaintDevice* replacement);
QPaintDevice* QPainter_Redirected(QPaintDevice* device);
void QPainter_RestoreRedirected(QPaintDevice* device);
void QPainter_BeginNativePainting(QPainter* self);
void QPainter_EndNativePainting(QPainter* self);
void QPainter_SetMatrix2(QPainter* self, QMatrix* matrix, bool combine);
void QPainter_SetTransform2(QPainter* self, QTransform* transform, bool combine);
void QPainter_SetWorldMatrix2(QPainter* self, QMatrix* matrix, bool combine);
void QPainter_SetWorldTransform2(QPainter* self, QTransform* matrix, bool combine);
void QPainter_DrawRoundRect22(QPainter* self, QRectF* r, int xround);
void QPainter_DrawRoundRect3(QPainter* self, QRectF* r, int xround, int yround);
void QPainter_DrawRoundRect5(QPainter* self, int x, int y, int w, int h, int param5);
void QPainter_DrawRoundRect6(QPainter* self, int x, int y, int w, int h, int param5, int param6);
void QPainter_DrawRoundRect23(QPainter* self, QRect* r, int xround);
void QPainter_DrawRoundRect32(QPainter* self, QRect* r, int xround, int yround);
void QPainter_DrawTiledPixmap32(QPainter* self, QRectF* rect, QPixmap* pm, QPointF* offset);
void QPainter_DrawTiledPixmap6(QPainter* self, int x, int y, int w, int h, QPixmap* param5, int sx);
void QPainter_DrawTiledPixmap7(QPainter* self, int x, int y, int w, int h, QPixmap* param5, int sx, int sy);
void QPainter_DrawTiledPixmap33(QPainter* self, QRect* param1, QPixmap* param2, QPoint* param3);
void QPainter_DrawText42(QPainter* self, QRectF* r, int flags, const char* text, size_t text_Strlen, QRectF* br);
void QPainter_DrawText43(QPainter* self, QRect* r, int flags, const char* text, size_t text_Strlen, QRect* br);
void QPainter_DrawText72(QPainter* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen, QRect* br);
void QPainter_DrawText32(QPainter* self, QRectF* r, const char* text, size_t text_Strlen, QTextOption* o);
QRectF* QPainter_BoundingRect32(QPainter* self, QRectF* rect, const char* text, size_t text_Strlen, QTextOption* o);
void QPainter_SetRedirected3(QPaintDevice* device, QPaintDevice* replacement, QPoint* offset);
QPaintDevice* QPainter_Redirected2(QPaintDevice* device, QPoint* offset);
void QPainter_Delete(QPainter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
