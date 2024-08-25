#include "gen_qpainter.h"
#include "qpainter.h"

#include <QBrush>
#include <QColor>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QGlyphRun>
#include <QImage>
#include <QLine>
#include <QLineF>
#include <QList>
#include <QMatrix>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPainterPath>
#include <QPen>
#include <QPicture>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QStaticText>
#include <QString>
#include <QTextItem>
#include <QTextOption>
#include <QTransform>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPainter* QPainter_new() {
	return new QPainter();
}

QPainter* QPainter_new2(QPaintDevice* param1) {
	return new QPainter(param1);
}

QPaintDevice* QPainter_Device(QPainter* self) {
	return self->device();
}

bool QPainter_Begin(QPainter* self, QPaintDevice* param1) {
	return self->begin(param1);
}

bool QPainter_End(QPainter* self) {
	return self->end();
}

bool QPainter_IsActive(QPainter* self) {
	return self->isActive();
}

void QPainter_InitFrom(QPainter* self, QPaintDevice* device) {
	self->initFrom(device);
}

QFont* QPainter_Font(QPainter* self) {
	const QFont& ret = self->font();
	// Cast returned reference into pointer
	return const_cast<QFont*>(&ret);
}

void QPainter_SetFont(QPainter* self, QFont* f) {
	self->setFont(*f);
}

QFontMetrics* QPainter_FontMetrics(QPainter* self) {
	QFontMetrics ret = self->fontMetrics();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFontMetrics*>(new QFontMetrics(ret));
}

QFontInfo* QPainter_FontInfo(QPainter* self) {
	QFontInfo ret = self->fontInfo();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFontInfo*>(new QFontInfo(ret));
}

void QPainter_SetPen(QPainter* self, QColor* color) {
	self->setPen(*color);
}

void QPainter_SetPenWithPen(QPainter* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QPainter_Pen(QPainter* self) {
	const QPen& ret = self->pen();
	// Cast returned reference into pointer
	return const_cast<QPen*>(&ret);
}

void QPainter_SetBrush(QPainter* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QPainter_Brush(QPainter* self) {
	const QBrush& ret = self->brush();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

QPoint* QPainter_BrushOrigin(QPainter* self) {
	QPoint ret = self->brushOrigin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QPainter_SetBrushOrigin(QPainter* self, int x, int y) {
	self->setBrushOrigin(static_cast<int>(x), static_cast<int>(y));
}

void QPainter_SetBrushOriginWithBrushOrigin(QPainter* self, QPoint* brushOrigin) {
	self->setBrushOrigin(*brushOrigin);
}

void QPainter_SetBrushOrigin2(QPainter* self, QPointF* brushOrigin) {
	self->setBrushOrigin(*brushOrigin);
}

void QPainter_SetBackground(QPainter* self, QBrush* bg) {
	self->setBackground(*bg);
}

QBrush* QPainter_Background(QPainter* self) {
	const QBrush& ret = self->background();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&ret);
}

double QPainter_Opacity(QPainter* self) {
	return self->opacity();
}

void QPainter_SetOpacity(QPainter* self, double opacity) {
	self->setOpacity(static_cast<qreal>(opacity));
}

QRegion* QPainter_ClipRegion(QPainter* self) {
	QRegion ret = self->clipRegion();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QPainterPath* QPainter_ClipPath(QPainter* self) {
	QPainterPath ret = self->clipPath();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

void QPainter_SetClipping(QPainter* self, bool enable) {
	self->setClipping(enable);
}

bool QPainter_HasClipping(QPainter* self) {
	return self->hasClipping();
}

QRectF* QPainter_ClipBoundingRect(QPainter* self) {
	QRectF ret = self->clipBoundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QPainter_Save(QPainter* self) {
	self->save();
}

void QPainter_Restore(QPainter* self) {
	self->restore();
}

void QPainter_SetMatrix(QPainter* self, QMatrix* matrix) {
	self->setMatrix(*matrix);
}

QMatrix* QPainter_Matrix(QPainter* self) {
	const QMatrix& ret = self->matrix();
	// Cast returned reference into pointer
	return const_cast<QMatrix*>(&ret);
}

QMatrix* QPainter_DeviceMatrix(QPainter* self) {
	const QMatrix& ret = self->deviceMatrix();
	// Cast returned reference into pointer
	return const_cast<QMatrix*>(&ret);
}

void QPainter_ResetMatrix(QPainter* self) {
	self->resetMatrix();
}

void QPainter_SetTransform(QPainter* self, QTransform* transform) {
	self->setTransform(*transform);
}

QTransform* QPainter_Transform(QPainter* self) {
	const QTransform& ret = self->transform();
	// Cast returned reference into pointer
	return const_cast<QTransform*>(&ret);
}

QTransform* QPainter_DeviceTransform(QPainter* self) {
	const QTransform& ret = self->deviceTransform();
	// Cast returned reference into pointer
	return const_cast<QTransform*>(&ret);
}

void QPainter_ResetTransform(QPainter* self) {
	self->resetTransform();
}

void QPainter_SetWorldMatrix(QPainter* self, QMatrix* matrix) {
	self->setWorldMatrix(*matrix);
}

QMatrix* QPainter_WorldMatrix(QPainter* self) {
	const QMatrix& ret = self->worldMatrix();
	// Cast returned reference into pointer
	return const_cast<QMatrix*>(&ret);
}

QMatrix* QPainter_CombinedMatrix(QPainter* self) {
	QMatrix ret = self->combinedMatrix();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(ret));
}

void QPainter_SetMatrixEnabled(QPainter* self, bool enabled) {
	self->setMatrixEnabled(enabled);
}

bool QPainter_MatrixEnabled(QPainter* self) {
	return self->matrixEnabled();
}

void QPainter_SetWorldTransform(QPainter* self, QTransform* matrix) {
	self->setWorldTransform(*matrix);
}

QTransform* QPainter_WorldTransform(QPainter* self) {
	const QTransform& ret = self->worldTransform();
	// Cast returned reference into pointer
	return const_cast<QTransform*>(&ret);
}

QTransform* QPainter_CombinedTransform(QPainter* self) {
	QTransform ret = self->combinedTransform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

void QPainter_SetWorldMatrixEnabled(QPainter* self, bool enabled) {
	self->setWorldMatrixEnabled(enabled);
}

bool QPainter_WorldMatrixEnabled(QPainter* self) {
	return self->worldMatrixEnabled();
}

void QPainter_Scale(QPainter* self, double sx, double sy) {
	self->scale(static_cast<qreal>(sx), static_cast<qreal>(sy));
}

void QPainter_Shear(QPainter* self, double sh, double sv) {
	self->shear(static_cast<qreal>(sh), static_cast<qreal>(sv));
}

void QPainter_Rotate(QPainter* self, double a) {
	self->rotate(static_cast<qreal>(a));
}

void QPainter_Translate(QPainter* self, QPointF* offset) {
	self->translate(*offset);
}

void QPainter_TranslateWithOffset(QPainter* self, QPoint* offset) {
	self->translate(*offset);
}

void QPainter_Translate2(QPainter* self, double dx, double dy) {
	self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QRect* QPainter_Window(QPainter* self) {
	QRect ret = self->window();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QPainter_SetWindow(QPainter* self, QRect* window) {
	self->setWindow(*window);
}

void QPainter_SetWindow2(QPainter* self, int x, int y, int w, int h) {
	self->setWindow(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

QRect* QPainter_Viewport(QPainter* self) {
	QRect ret = self->viewport();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QPainter_SetViewport(QPainter* self, QRect* viewport) {
	self->setViewport(*viewport);
}

void QPainter_SetViewport2(QPainter* self, int x, int y, int w, int h) {
	self->setViewport(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_SetViewTransformEnabled(QPainter* self, bool enable) {
	self->setViewTransformEnabled(enable);
}

bool QPainter_ViewTransformEnabled(QPainter* self) {
	return self->viewTransformEnabled();
}

void QPainter_StrokePath(QPainter* self, QPainterPath* path, QPen* pen) {
	self->strokePath(*path, *pen);
}

void QPainter_FillPath(QPainter* self, QPainterPath* path, QBrush* brush) {
	self->fillPath(*path, *brush);
}

void QPainter_DrawPath(QPainter* self, QPainterPath* path) {
	self->drawPath(*path);
}

void QPainter_DrawPoint(QPainter* self, QPointF* pt) {
	self->drawPoint(*pt);
}

void QPainter_DrawPointWithQPoint(QPainter* self, QPoint* p) {
	self->drawPoint(*p);
}

void QPainter_DrawPoint2(QPainter* self, int x, int y) {
	self->drawPoint(static_cast<int>(x), static_cast<int>(y));
}

void QPainter_DrawPoints(QPainter* self, QPointF* points, int pointCount) {
	self->drawPoints(points, static_cast<int>(pointCount));
}

void QPainter_DrawPoints2(QPainter* self, QPoint* points, int pointCount) {
	self->drawPoints(points, static_cast<int>(pointCount));
}

void QPainter_DrawLine(QPainter* self, QLineF* line) {
	self->drawLine(*line);
}

void QPainter_DrawLineWithLine(QPainter* self, QLine* line) {
	self->drawLine(*line);
}

void QPainter_DrawLine2(QPainter* self, int x1, int y1, int x2, int y2) {
	self->drawLine(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

void QPainter_DrawLine3(QPainter* self, QPoint* p1, QPoint* p2) {
	self->drawLine(*p1, *p2);
}

void QPainter_DrawLine4(QPainter* self, QPointF* p1, QPointF* p2) {
	self->drawLine(*p1, *p2);
}

void QPainter_DrawLines(QPainter* self, QLineF* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPainter_DrawLinesWithLines(QPainter* self, QLineF** lines, size_t lines_len) {
	QVector<QLineF> lines_QList;
	lines_QList.reserve(lines_len);
	for(size_t i = 0; i < lines_len; ++i) {
		lines_QList.push_back(*(lines[i]));
	}
	self->drawLines(lines_QList);
}

void QPainter_DrawLines2(QPainter* self, QPointF* pointPairs, int lineCount) {
	self->drawLines(pointPairs, static_cast<int>(lineCount));
}

void QPainter_DrawLinesWithPointPairs(QPainter* self, QPointF** pointPairs, size_t pointPairs_len) {
	QVector<QPointF> pointPairs_QList;
	pointPairs_QList.reserve(pointPairs_len);
	for(size_t i = 0; i < pointPairs_len; ++i) {
		pointPairs_QList.push_back(*(pointPairs[i]));
	}
	self->drawLines(pointPairs_QList);
}

void QPainter_DrawLines3(QPainter* self, QLine* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPainter_DrawLines4(QPainter* self, QLine** lines, size_t lines_len) {
	QVector<QLine> lines_QList;
	lines_QList.reserve(lines_len);
	for(size_t i = 0; i < lines_len; ++i) {
		lines_QList.push_back(*(lines[i]));
	}
	self->drawLines(lines_QList);
}

void QPainter_DrawLines5(QPainter* self, QPoint* pointPairs, int lineCount) {
	self->drawLines(pointPairs, static_cast<int>(lineCount));
}

void QPainter_DrawLines6(QPainter* self, QPoint** pointPairs, size_t pointPairs_len) {
	QVector<QPoint> pointPairs_QList;
	pointPairs_QList.reserve(pointPairs_len);
	for(size_t i = 0; i < pointPairs_len; ++i) {
		pointPairs_QList.push_back(*(pointPairs[i]));
	}
	self->drawLines(pointPairs_QList);
}

void QPainter_DrawRect(QPainter* self, QRectF* rect) {
	self->drawRect(*rect);
}

void QPainter_DrawRect2(QPainter* self, int x1, int y1, int w, int h) {
	self->drawRect(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_DrawRectWithRect(QPainter* self, QRect* rect) {
	self->drawRect(*rect);
}

void QPainter_DrawRects(QPainter* self, QRectF* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPainter_DrawRectsWithRectangles(QPainter* self, QRectF** rectangles, size_t rectangles_len) {
	QVector<QRectF> rectangles_QList;
	rectangles_QList.reserve(rectangles_len);
	for(size_t i = 0; i < rectangles_len; ++i) {
		rectangles_QList.push_back(*(rectangles[i]));
	}
	self->drawRects(rectangles_QList);
}

void QPainter_DrawRects2(QPainter* self, QRect* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPainter_DrawRects3(QPainter* self, QRect** rectangles, size_t rectangles_len) {
	QVector<QRect> rectangles_QList;
	rectangles_QList.reserve(rectangles_len);
	for(size_t i = 0; i < rectangles_len; ++i) {
		rectangles_QList.push_back(*(rectangles[i]));
	}
	self->drawRects(rectangles_QList);
}

void QPainter_DrawEllipse(QPainter* self, QRectF* r) {
	self->drawEllipse(*r);
}

void QPainter_DrawEllipseWithQRect(QPainter* self, QRect* r) {
	self->drawEllipse(*r);
}

void QPainter_DrawEllipse2(QPainter* self, int x, int y, int w, int h) {
	self->drawEllipse(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_DrawEllipse3(QPainter* self, QPointF* center, double rx, double ry) {
	self->drawEllipse(*center, static_cast<qreal>(rx), static_cast<qreal>(ry));
}

void QPainter_DrawEllipse4(QPainter* self, QPoint* center, int rx, int ry) {
	self->drawEllipse(*center, static_cast<int>(rx), static_cast<int>(ry));
}

void QPainter_DrawPolyline(QPainter* self, QPointF* points, int pointCount) {
	self->drawPolyline(points, static_cast<int>(pointCount));
}

void QPainter_DrawPolyline2(QPainter* self, QPoint* points, int pointCount) {
	self->drawPolyline(points, static_cast<int>(pointCount));
}

void QPainter_DrawConvexPolygon(QPainter* self, QPointF* points, int pointCount) {
	self->drawConvexPolygon(points, static_cast<int>(pointCount));
}

void QPainter_DrawConvexPolygon2(QPainter* self, QPoint* points, int pointCount) {
	self->drawConvexPolygon(points, static_cast<int>(pointCount));
}

void QPainter_DrawArc(QPainter* self, QRectF* rect, int a, int alen) {
	self->drawArc(*rect, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_DrawArc2(QPainter* self, QRect* param1, int a, int alen) {
	self->drawArc(*param1, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_DrawArc3(QPainter* self, int x, int y, int w, int h, int a, int alen) {
	self->drawArc(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_DrawPie(QPainter* self, QRectF* rect, int a, int alen) {
	self->drawPie(*rect, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_DrawPie2(QPainter* self, int x, int y, int w, int h, int a, int alen) {
	self->drawPie(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_DrawPie3(QPainter* self, QRect* param1, int a, int alen) {
	self->drawPie(*param1, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_DrawChord(QPainter* self, QRectF* rect, int a, int alen) {
	self->drawChord(*rect, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_DrawChord2(QPainter* self, int x, int y, int w, int h, int a, int alen) {
	self->drawChord(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_DrawChord3(QPainter* self, QRect* param1, int a, int alen) {
	self->drawChord(*param1, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_DrawRoundRect(QPainter* self, QRectF* r) {
	self->drawRoundRect(*r);
}

void QPainter_DrawRoundRect2(QPainter* self, int x, int y, int w, int h) {
	self->drawRoundRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_DrawRoundRectWithQRect(QPainter* self, QRect* r) {
	self->drawRoundRect(*r);
}

void QPainter_DrawTiledPixmap(QPainter* self, QRectF* rect, QPixmap* pm) {
	self->drawTiledPixmap(*rect, *pm);
}

void QPainter_DrawTiledPixmap2(QPainter* self, int x, int y, int w, int h, QPixmap* param5) {
	self->drawTiledPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *param5);
}

void QPainter_DrawTiledPixmap3(QPainter* self, QRect* param1, QPixmap* param2) {
	self->drawTiledPixmap(*param1, *param2);
}

void QPainter_DrawPicture(QPainter* self, QPointF* p, QPicture* picture) {
	self->drawPicture(*p, *picture);
}

void QPainter_DrawPicture2(QPainter* self, int x, int y, QPicture* picture) {
	self->drawPicture(static_cast<int>(x), static_cast<int>(y), *picture);
}

void QPainter_DrawPicture3(QPainter* self, QPoint* p, QPicture* picture) {
	self->drawPicture(*p, *picture);
}

void QPainter_DrawPixmap(QPainter* self, QRectF* targetRect, QPixmap* pixmap, QRectF* sourceRect) {
	self->drawPixmap(*targetRect, *pixmap, *sourceRect);
}

void QPainter_DrawPixmap2(QPainter* self, QRect* targetRect, QPixmap* pixmap, QRect* sourceRect) {
	self->drawPixmap(*targetRect, *pixmap, *sourceRect);
}

void QPainter_DrawPixmap3(QPainter* self, int x, int y, int w, int h, QPixmap* pm, int sx, int sy, int sw, int sh) {
	self->drawPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *pm, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw), static_cast<int>(sh));
}

void QPainter_DrawPixmap4(QPainter* self, int x, int y, QPixmap* pm, int sx, int sy, int sw, int sh) {
	self->drawPixmap(static_cast<int>(x), static_cast<int>(y), *pm, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw), static_cast<int>(sh));
}

void QPainter_DrawPixmap5(QPainter* self, QPointF* p, QPixmap* pm, QRectF* sr) {
	self->drawPixmap(*p, *pm, *sr);
}

void QPainter_DrawPixmap6(QPainter* self, QPoint* p, QPixmap* pm, QRect* sr) {
	self->drawPixmap(*p, *pm, *sr);
}

void QPainter_DrawPixmap7(QPainter* self, QPointF* p, QPixmap* pm) {
	self->drawPixmap(*p, *pm);
}

void QPainter_DrawPixmap8(QPainter* self, QPoint* p, QPixmap* pm) {
	self->drawPixmap(*p, *pm);
}

void QPainter_DrawPixmap9(QPainter* self, int x, int y, QPixmap* pm) {
	self->drawPixmap(static_cast<int>(x), static_cast<int>(y), *pm);
}

void QPainter_DrawPixmap10(QPainter* self, QRect* r, QPixmap* pm) {
	self->drawPixmap(*r, *pm);
}

void QPainter_DrawPixmap11(QPainter* self, int x, int y, int w, int h, QPixmap* pm) {
	self->drawPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *pm);
}

void QPainter_DrawImage(QPainter* self, QRectF* r, QImage* image) {
	self->drawImage(*r, *image);
}

void QPainter_DrawImage2(QPainter* self, QRect* r, QImage* image) {
	self->drawImage(*r, *image);
}

void QPainter_DrawImage3(QPainter* self, QPointF* p, QImage* image) {
	self->drawImage(*p, *image);
}

void QPainter_DrawImage4(QPainter* self, QPoint* p, QImage* image) {
	self->drawImage(*p, *image);
}

void QPainter_DrawGlyphRun(QPainter* self, QPointF* position, QGlyphRun* glyphRun) {
	self->drawGlyphRun(*position, *glyphRun);
}

void QPainter_DrawStaticText(QPainter* self, QPointF* topLeftPosition, QStaticText* staticText) {
	self->drawStaticText(*topLeftPosition, *staticText);
}

void QPainter_DrawStaticText2(QPainter* self, QPoint* topLeftPosition, QStaticText* staticText) {
	self->drawStaticText(*topLeftPosition, *staticText);
}

void QPainter_DrawStaticText3(QPainter* self, int left, int top, QStaticText* staticText) {
	self->drawStaticText(static_cast<int>(left), static_cast<int>(top), *staticText);
}

void QPainter_DrawText(QPainter* self, QPointF* p, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	self->drawText(*p, s_QString);
}

void QPainter_DrawText2(QPainter* self, QPoint* p, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	self->drawText(*p, s_QString);
}

void QPainter_DrawText3(QPainter* self, int x, int y, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	self->drawText(static_cast<int>(x), static_cast<int>(y), s_QString);
}

void QPainter_DrawText4(QPainter* self, QPointF* p, const char* str, size_t str_Strlen, int tf, int justificationPadding) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	self->drawText(*p, str_QString, static_cast<int>(tf), static_cast<int>(justificationPadding));
}

void QPainter_DrawText5(QPainter* self, QRectF* r, int flags, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->drawText(*r, static_cast<int>(flags), text_QString);
}

void QPainter_DrawText6(QPainter* self, QRect* r, int flags, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->drawText(*r, static_cast<int>(flags), text_QString);
}

void QPainter_DrawText7(QPainter* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->drawText(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString);
}

void QPainter_DrawText8(QPainter* self, QRectF* r, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->drawText(*r, text_QString);
}

QRectF* QPainter_BoundingRect(QPainter* self, QRectF* rect, int flags, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRectF ret = self->boundingRect(*rect, static_cast<int>(flags), text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRect* QPainter_BoundingRect2(QPainter* self, QRect* rect, int flags, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = self->boundingRect(*rect, static_cast<int>(flags), text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QPainter_BoundingRect3(QPainter* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRect ret = self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRectF* QPainter_BoundingRect4(QPainter* self, QRectF* rect, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRectF ret = self->boundingRect(*rect, text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QPainter_DrawTextItem(QPainter* self, QPointF* p, QTextItem* ti) {
	self->drawTextItem(*p, *ti);
}

void QPainter_DrawTextItem2(QPainter* self, int x, int y, QTextItem* ti) {
	self->drawTextItem(static_cast<int>(x), static_cast<int>(y), *ti);
}

void QPainter_DrawTextItem3(QPainter* self, QPoint* p, QTextItem* ti) {
	self->drawTextItem(*p, *ti);
}

void QPainter_FillRect(QPainter* self, QRectF* param1, QBrush* param2) {
	self->fillRect(*param1, *param2);
}

void QPainter_FillRect2(QPainter* self, int x, int y, int w, int h, QBrush* param5) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *param5);
}

void QPainter_FillRect3(QPainter* self, QRect* param1, QBrush* param2) {
	self->fillRect(*param1, *param2);
}

void QPainter_FillRect4(QPainter* self, QRectF* param1, QColor* color) {
	self->fillRect(*param1, *color);
}

void QPainter_FillRect5(QPainter* self, int x, int y, int w, int h, QColor* color) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *color);
}

void QPainter_FillRect6(QPainter* self, QRect* param1, QColor* color) {
	self->fillRect(*param1, *color);
}

void QPainter_EraseRect(QPainter* self, QRectF* param1) {
	self->eraseRect(*param1);
}

void QPainter_EraseRect2(QPainter* self, int x, int y, int w, int h) {
	self->eraseRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_EraseRectWithQRect(QPainter* self, QRect* param1) {
	self->eraseRect(*param1);
}

QPaintEngine* QPainter_PaintEngine(QPainter* self) {
	return self->paintEngine();
}

void QPainter_SetRedirected(QPaintDevice* device, QPaintDevice* replacement) {
	QPainter::setRedirected(device, replacement);
}

QPaintDevice* QPainter_Redirected(QPaintDevice* device) {
	return QPainter::redirected(device);
}

void QPainter_RestoreRedirected(QPaintDevice* device) {
	QPainter::restoreRedirected(device);
}

void QPainter_BeginNativePainting(QPainter* self) {
	self->beginNativePainting();
}

void QPainter_EndNativePainting(QPainter* self) {
	self->endNativePainting();
}

void QPainter_SetMatrix2(QPainter* self, QMatrix* matrix, bool combine) {
	self->setMatrix(*matrix, combine);
}

void QPainter_SetTransform2(QPainter* self, QTransform* transform, bool combine) {
	self->setTransform(*transform, combine);
}

void QPainter_SetWorldMatrix2(QPainter* self, QMatrix* matrix, bool combine) {
	self->setWorldMatrix(*matrix, combine);
}

void QPainter_SetWorldTransform2(QPainter* self, QTransform* matrix, bool combine) {
	self->setWorldTransform(*matrix, combine);
}

void QPainter_DrawRoundRect22(QPainter* self, QRectF* r, int xround) {
	self->drawRoundRect(*r, static_cast<int>(xround));
}

void QPainter_DrawRoundRect3(QPainter* self, QRectF* r, int xround, int yround) {
	self->drawRoundRect(*r, static_cast<int>(xround), static_cast<int>(yround));
}

void QPainter_DrawRoundRect5(QPainter* self, int x, int y, int w, int h, int param5) {
	self->drawRoundRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(param5));
}

void QPainter_DrawRoundRect6(QPainter* self, int x, int y, int w, int h, int param5, int param6) {
	self->drawRoundRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(param5), static_cast<int>(param6));
}

void QPainter_DrawRoundRect23(QPainter* self, QRect* r, int xround) {
	self->drawRoundRect(*r, static_cast<int>(xround));
}

void QPainter_DrawRoundRect32(QPainter* self, QRect* r, int xround, int yround) {
	self->drawRoundRect(*r, static_cast<int>(xround), static_cast<int>(yround));
}

void QPainter_DrawTiledPixmap32(QPainter* self, QRectF* rect, QPixmap* pm, QPointF* offset) {
	self->drawTiledPixmap(*rect, *pm, *offset);
}

void QPainter_DrawTiledPixmap6(QPainter* self, int x, int y, int w, int h, QPixmap* param5, int sx) {
	self->drawTiledPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *param5, static_cast<int>(sx));
}

void QPainter_DrawTiledPixmap7(QPainter* self, int x, int y, int w, int h, QPixmap* param5, int sx, int sy) {
	self->drawTiledPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *param5, static_cast<int>(sx), static_cast<int>(sy));
}

void QPainter_DrawTiledPixmap33(QPainter* self, QRect* param1, QPixmap* param2, QPoint* param3) {
	self->drawTiledPixmap(*param1, *param2, *param3);
}

void QPainter_DrawText42(QPainter* self, QRectF* r, int flags, const char* text, size_t text_Strlen, QRectF* br) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->drawText(*r, static_cast<int>(flags), text_QString, br);
}

void QPainter_DrawText43(QPainter* self, QRect* r, int flags, const char* text, size_t text_Strlen, QRect* br) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->drawText(*r, static_cast<int>(flags), text_QString, br);
}

void QPainter_DrawText72(QPainter* self, int x, int y, int w, int h, int flags, const char* text, size_t text_Strlen, QRect* br) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->drawText(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, br);
}

void QPainter_DrawText32(QPainter* self, QRectF* r, const char* text, size_t text_Strlen, QTextOption* o) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->drawText(*r, text_QString, *o);
}

QRectF* QPainter_BoundingRect32(QPainter* self, QRectF* rect, const char* text, size_t text_Strlen, QTextOption* o) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QRectF ret = self->boundingRect(*rect, text_QString, *o);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QPainter_SetRedirected3(QPaintDevice* device, QPaintDevice* replacement, QPoint* offset) {
	QPainter::setRedirected(device, replacement, *offset);
}

QPaintDevice* QPainter_Redirected2(QPaintDevice* device, QPoint* offset) {
	return QPainter::redirected(device, offset);
}

void QPainter_Delete(QPainter* self) {
	delete self;
}

