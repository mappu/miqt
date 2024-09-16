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
#define WORKAROUND_INNER_CLASS_DEFINITION_QPainter__PixmapFragment
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
#include <QByteArray>
#include <cstring>
#include <QTextItem>
#include <QTextOption>
#include <QTransform>
#include "qpainter.h"
#include "gen_qpainter.h"
#include "_cgo_export.h"

QPainter* QPainter_new() {
	return new QPainter();
}

QPainter* QPainter_new2(QPaintDevice* param1) {
	return new QPainter(param1);
}

QPaintDevice* QPainter_Device(const QPainter* self) {
	return self->device();
}

bool QPainter_Begin(QPainter* self, QPaintDevice* param1) {
	return self->begin(param1);
}

bool QPainter_End(QPainter* self) {
	return self->end();
}

bool QPainter_IsActive(const QPainter* self) {
	return self->isActive();
}

void QPainter_InitFrom(QPainter* self, QPaintDevice* device) {
	self->initFrom(device);
}

void QPainter_SetCompositionMode(QPainter* self, uintptr_t mode) {
	self->setCompositionMode(static_cast<QPainter::CompositionMode>(mode));
}

uintptr_t QPainter_CompositionMode(const QPainter* self) {
	QPainter::CompositionMode _ret = self->compositionMode();
	return static_cast<uintptr_t>(_ret);
}

QFont* QPainter_Font(const QPainter* self) {
	const QFont& _ret = self->font();
	// Cast returned reference into pointer
	return const_cast<QFont*>(&_ret);
}

void QPainter_SetFont(QPainter* self, QFont* f) {
	self->setFont(*f);
}

QFontMetrics* QPainter_FontMetrics(const QPainter* self) {
	QFontMetrics _ret = self->fontMetrics();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFontMetrics*>(new QFontMetrics(_ret));
}

QFontInfo* QPainter_FontInfo(const QPainter* self) {
	QFontInfo _ret = self->fontInfo();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFontInfo*>(new QFontInfo(_ret));
}

void QPainter_SetPen(QPainter* self, QColor* color) {
	self->setPen(*color);
}

void QPainter_SetPenWithPen(QPainter* self, QPen* pen) {
	self->setPen(*pen);
}

void QPainter_SetPenWithStyle(QPainter* self, uintptr_t style) {
	self->setPen(static_cast<Qt::PenStyle>(style));
}

QPen* QPainter_Pen(const QPainter* self) {
	const QPen& _ret = self->pen();
	// Cast returned reference into pointer
	return const_cast<QPen*>(&_ret);
}

void QPainter_SetBrush(QPainter* self, QBrush* brush) {
	self->setBrush(*brush);
}

void QPainter_SetBrushWithStyle(QPainter* self, uintptr_t style) {
	self->setBrush(static_cast<Qt::BrushStyle>(style));
}

QBrush* QPainter_Brush(const QPainter* self) {
	const QBrush& _ret = self->brush();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

void QPainter_SetBackgroundMode(QPainter* self, uintptr_t mode) {
	self->setBackgroundMode(static_cast<Qt::BGMode>(mode));
}

uintptr_t QPainter_BackgroundMode(const QPainter* self) {
	Qt::BGMode _ret = self->backgroundMode();
	return static_cast<uintptr_t>(_ret);
}

QPoint* QPainter_BrushOrigin(const QPainter* self) {
	QPoint _ret = self->brushOrigin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(_ret));
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

QBrush* QPainter_Background(const QPainter* self) {
	const QBrush& _ret = self->background();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

double QPainter_Opacity(const QPainter* self) {
	return self->opacity();
}

void QPainter_SetOpacity(QPainter* self, double opacity) {
	self->setOpacity(static_cast<qreal>(opacity));
}

QRegion* QPainter_ClipRegion(const QPainter* self) {
	QRegion _ret = self->clipRegion();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QPainterPath* QPainter_ClipPath(const QPainter* self) {
	QPainterPath _ret = self->clipPath();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(_ret));
}

void QPainter_SetClipRect(QPainter* self, QRectF* param1) {
	self->setClipRect(*param1);
}

void QPainter_SetClipRectWithQRect(QPainter* self, QRect* param1) {
	self->setClipRect(*param1);
}

void QPainter_SetClipRect2(QPainter* self, int x, int y, int w, int h) {
	self->setClipRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_SetClipRegion(QPainter* self, QRegion* param1) {
	self->setClipRegion(*param1);
}

void QPainter_SetClipPath(QPainter* self, QPainterPath* path) {
	self->setClipPath(*path);
}

void QPainter_SetClipping(QPainter* self, bool enable) {
	self->setClipping(enable);
}

bool QPainter_HasClipping(const QPainter* self) {
	return self->hasClipping();
}

QRectF* QPainter_ClipBoundingRect(const QPainter* self) {
	QRectF _ret = self->clipBoundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
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

QMatrix* QPainter_Matrix(const QPainter* self) {
	const QMatrix& _ret = self->matrix();
	// Cast returned reference into pointer
	return const_cast<QMatrix*>(&_ret);
}

QMatrix* QPainter_DeviceMatrix(const QPainter* self) {
	const QMatrix& _ret = self->deviceMatrix();
	// Cast returned reference into pointer
	return const_cast<QMatrix*>(&_ret);
}

void QPainter_ResetMatrix(QPainter* self) {
	self->resetMatrix();
}

void QPainter_SetTransform(QPainter* self, QTransform* transform) {
	self->setTransform(*transform);
}

QTransform* QPainter_Transform(const QPainter* self) {
	const QTransform& _ret = self->transform();
	// Cast returned reference into pointer
	return const_cast<QTransform*>(&_ret);
}

QTransform* QPainter_DeviceTransform(const QPainter* self) {
	const QTransform& _ret = self->deviceTransform();
	// Cast returned reference into pointer
	return const_cast<QTransform*>(&_ret);
}

void QPainter_ResetTransform(QPainter* self) {
	self->resetTransform();
}

void QPainter_SetWorldMatrix(QPainter* self, QMatrix* matrix) {
	self->setWorldMatrix(*matrix);
}

QMatrix* QPainter_WorldMatrix(const QPainter* self) {
	const QMatrix& _ret = self->worldMatrix();
	// Cast returned reference into pointer
	return const_cast<QMatrix*>(&_ret);
}

QMatrix* QPainter_CombinedMatrix(const QPainter* self) {
	QMatrix _ret = self->combinedMatrix();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(_ret));
}

void QPainter_SetMatrixEnabled(QPainter* self, bool enabled) {
	self->setMatrixEnabled(enabled);
}

bool QPainter_MatrixEnabled(const QPainter* self) {
	return self->matrixEnabled();
}

void QPainter_SetWorldTransform(QPainter* self, QTransform* matrix) {
	self->setWorldTransform(*matrix);
}

QTransform* QPainter_WorldTransform(const QPainter* self) {
	const QTransform& _ret = self->worldTransform();
	// Cast returned reference into pointer
	return const_cast<QTransform*>(&_ret);
}

QTransform* QPainter_CombinedTransform(const QPainter* self) {
	QTransform _ret = self->combinedTransform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
}

void QPainter_SetWorldMatrixEnabled(QPainter* self, bool enabled) {
	self->setWorldMatrixEnabled(enabled);
}

bool QPainter_WorldMatrixEnabled(const QPainter* self) {
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

QRect* QPainter_Window(const QPainter* self) {
	QRect _ret = self->window();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

void QPainter_SetWindow(QPainter* self, QRect* window) {
	self->setWindow(*window);
}

void QPainter_SetWindow2(QPainter* self, int x, int y, int w, int h) {
	self->setWindow(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

QRect* QPainter_Viewport(const QPainter* self) {
	QRect _ret = self->viewport();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
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

bool QPainter_ViewTransformEnabled(const QPainter* self) {
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

void QPainter_DrawLinesWithLines(QPainter* self, struct miqt_array* /* of QLineF* */ lines) {
	QVector<QLineF> lines_QList;
	lines_QList.reserve(lines->len);
	QLineF** lines_arr = static_cast<QLineF**>(lines->data);
	for(size_t i = 0; i < lines->len; ++i) {
		lines_QList.push_back(*(lines_arr[i]));
	}
	self->drawLines(lines_QList);
}

void QPainter_DrawLines2(QPainter* self, QPointF* pointPairs, int lineCount) {
	self->drawLines(pointPairs, static_cast<int>(lineCount));
}

void QPainter_DrawLinesWithPointPairs(QPainter* self, struct miqt_array* /* of QPointF* */ pointPairs) {
	QVector<QPointF> pointPairs_QList;
	pointPairs_QList.reserve(pointPairs->len);
	QPointF** pointPairs_arr = static_cast<QPointF**>(pointPairs->data);
	for(size_t i = 0; i < pointPairs->len; ++i) {
		pointPairs_QList.push_back(*(pointPairs_arr[i]));
	}
	self->drawLines(pointPairs_QList);
}

void QPainter_DrawLines3(QPainter* self, QLine* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPainter_DrawLines4(QPainter* self, struct miqt_array* /* of QLine* */ lines) {
	QVector<QLine> lines_QList;
	lines_QList.reserve(lines->len);
	QLine** lines_arr = static_cast<QLine**>(lines->data);
	for(size_t i = 0; i < lines->len; ++i) {
		lines_QList.push_back(*(lines_arr[i]));
	}
	self->drawLines(lines_QList);
}

void QPainter_DrawLines5(QPainter* self, QPoint* pointPairs, int lineCount) {
	self->drawLines(pointPairs, static_cast<int>(lineCount));
}

void QPainter_DrawLines6(QPainter* self, struct miqt_array* /* of QPoint* */ pointPairs) {
	QVector<QPoint> pointPairs_QList;
	pointPairs_QList.reserve(pointPairs->len);
	QPoint** pointPairs_arr = static_cast<QPoint**>(pointPairs->data);
	for(size_t i = 0; i < pointPairs->len; ++i) {
		pointPairs_QList.push_back(*(pointPairs_arr[i]));
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

void QPainter_DrawRectsWithRectangles(QPainter* self, struct miqt_array* /* of QRectF* */ rectangles) {
	QVector<QRectF> rectangles_QList;
	rectangles_QList.reserve(rectangles->len);
	QRectF** rectangles_arr = static_cast<QRectF**>(rectangles->data);
	for(size_t i = 0; i < rectangles->len; ++i) {
		rectangles_QList.push_back(*(rectangles_arr[i]));
	}
	self->drawRects(rectangles_QList);
}

void QPainter_DrawRects2(QPainter* self, QRect* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPainter_DrawRects3(QPainter* self, struct miqt_array* /* of QRect* */ rectangles) {
	QVector<QRect> rectangles_QList;
	rectangles_QList.reserve(rectangles->len);
	QRect** rectangles_arr = static_cast<QRect**>(rectangles->data);
	for(size_t i = 0; i < rectangles->len; ++i) {
		rectangles_QList.push_back(*(rectangles_arr[i]));
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

void QPainter_DrawPolygon(QPainter* self, QPointF* points, int pointCount) {
	self->drawPolygon(points, static_cast<int>(pointCount));
}

void QPainter_DrawPolygon2(QPainter* self, QPoint* points, int pointCount) {
	self->drawPolygon(points, static_cast<int>(pointCount));
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

void QPainter_DrawRoundedRect(QPainter* self, QRectF* rect, double xRadius, double yRadius) {
	self->drawRoundedRect(*rect, static_cast<qreal>(xRadius), static_cast<qreal>(yRadius));
}

void QPainter_DrawRoundedRect2(QPainter* self, int x, int y, int w, int h, double xRadius, double yRadius) {
	self->drawRoundedRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<qreal>(xRadius), static_cast<qreal>(yRadius));
}

void QPainter_DrawRoundedRect3(QPainter* self, QRect* rect, double xRadius, double yRadius) {
	self->drawRoundedRect(*rect, static_cast<qreal>(xRadius), static_cast<qreal>(yRadius));
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

void QPainter_DrawPixmapFragments(QPainter* self, QPainter__PixmapFragment* fragments, int fragmentCount, QPixmap* pixmap) {
	self->drawPixmapFragments(fragments, static_cast<int>(fragmentCount), *pixmap);
}

void QPainter_DrawImage(QPainter* self, QRectF* targetRect, QImage* image, QRectF* sourceRect) {
	self->drawImage(*targetRect, *image, *sourceRect);
}

void QPainter_DrawImage2(QPainter* self, QRect* targetRect, QImage* image, QRect* sourceRect) {
	self->drawImage(*targetRect, *image, *sourceRect);
}

void QPainter_DrawImage3(QPainter* self, QPointF* p, QImage* image, QRectF* sr) {
	self->drawImage(*p, *image, *sr);
}

void QPainter_DrawImage4(QPainter* self, QPoint* p, QImage* image, QRect* sr) {
	self->drawImage(*p, *image, *sr);
}

void QPainter_DrawImage5(QPainter* self, QRectF* r, QImage* image) {
	self->drawImage(*r, *image);
}

void QPainter_DrawImage6(QPainter* self, QRect* r, QImage* image) {
	self->drawImage(*r, *image);
}

void QPainter_DrawImage7(QPainter* self, QPointF* p, QImage* image) {
	self->drawImage(*p, *image);
}

void QPainter_DrawImage8(QPainter* self, QPoint* p, QImage* image) {
	self->drawImage(*p, *image);
}

void QPainter_DrawImage9(QPainter* self, int x, int y, QImage* image) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image);
}

void QPainter_SetLayoutDirection(QPainter* self, uintptr_t direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

uintptr_t QPainter_LayoutDirection(const QPainter* self) {
	Qt::LayoutDirection _ret = self->layoutDirection();
	return static_cast<uintptr_t>(_ret);
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

void QPainter_DrawText(QPainter* self, QPointF* p, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	self->drawText(*p, s_QString);
}

void QPainter_DrawText2(QPainter* self, QPoint* p, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	self->drawText(*p, s_QString);
}

void QPainter_DrawText3(QPainter* self, int x, int y, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	self->drawText(static_cast<int>(x), static_cast<int>(y), s_QString);
}

void QPainter_DrawText4(QPainter* self, QPointF* p, struct miqt_string* str, int tf, int justificationPadding) {
	QString str_QString = QString::fromUtf8(&str->data, str->len);
	self->drawText(*p, str_QString, static_cast<int>(tf), static_cast<int>(justificationPadding));
}

void QPainter_DrawText5(QPainter* self, QRectF* r, int flags, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->drawText(*r, static_cast<int>(flags), text_QString);
}

void QPainter_DrawText6(QPainter* self, QRect* r, int flags, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->drawText(*r, static_cast<int>(flags), text_QString);
}

void QPainter_DrawText7(QPainter* self, int x, int y, int w, int h, int flags, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->drawText(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString);
}

void QPainter_DrawText8(QPainter* self, QRectF* r, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->drawText(*r, text_QString);
}

QRectF* QPainter_BoundingRect(QPainter* self, QRectF* rect, int flags, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRectF _ret = self->boundingRect(*rect, static_cast<int>(flags), text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRect* QPainter_BoundingRect2(QPainter* self, QRect* rect, int flags, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRect _ret = self->boundingRect(*rect, static_cast<int>(flags), text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRect* QPainter_BoundingRect3(QPainter* self, int x, int y, int w, int h, int flags, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRect _ret = self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRectF* QPainter_BoundingRect4(QPainter* self, QRectF* rect, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRectF _ret = self->boundingRect(*rect, text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
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

void QPainter_FillRect7(QPainter* self, int x, int y, int w, int h, uintptr_t c) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::GlobalColor>(c));
}

void QPainter_FillRect8(QPainter* self, QRect* r, uintptr_t c) {
	self->fillRect(*r, static_cast<Qt::GlobalColor>(c));
}

void QPainter_FillRect9(QPainter* self, QRectF* r, uintptr_t c) {
	self->fillRect(*r, static_cast<Qt::GlobalColor>(c));
}

void QPainter_FillRect10(QPainter* self, int x, int y, int w, int h, uintptr_t style) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::BrushStyle>(style));
}

void QPainter_FillRect11(QPainter* self, QRect* r, uintptr_t style) {
	self->fillRect(*r, static_cast<Qt::BrushStyle>(style));
}

void QPainter_FillRect12(QPainter* self, QRectF* r, uintptr_t style) {
	self->fillRect(*r, static_cast<Qt::BrushStyle>(style));
}

void QPainter_FillRect13(QPainter* self, int x, int y, int w, int h, uintptr_t preset) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<QGradient::Preset>(preset));
}

void QPainter_FillRect14(QPainter* self, QRect* r, uintptr_t preset) {
	self->fillRect(*r, static_cast<QGradient::Preset>(preset));
}

void QPainter_FillRect15(QPainter* self, QRectF* r, uintptr_t preset) {
	self->fillRect(*r, static_cast<QGradient::Preset>(preset));
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

void QPainter_SetRenderHint(QPainter* self, uintptr_t hint) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint));
}

void QPainter_SetRenderHints(QPainter* self, int hints) {
	self->setRenderHints(static_cast<QPainter::RenderHints>(hints));
}

int QPainter_RenderHints(const QPainter* self) {
	QPainter::RenderHints _ret = self->renderHints();
	return static_cast<int>(_ret);
}

bool QPainter_TestRenderHint(const QPainter* self, uintptr_t hint) {
	return self->testRenderHint(static_cast<QPainter::RenderHint>(hint));
}

QPaintEngine* QPainter_PaintEngine(const QPainter* self) {
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

void QPainter_SetClipRect22(QPainter* self, QRectF* param1, uintptr_t op) {
	self->setClipRect(*param1, static_cast<Qt::ClipOperation>(op));
}

void QPainter_SetClipRect23(QPainter* self, QRect* param1, uintptr_t op) {
	self->setClipRect(*param1, static_cast<Qt::ClipOperation>(op));
}

void QPainter_SetClipRect5(QPainter* self, int x, int y, int w, int h, uintptr_t op) {
	self->setClipRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::ClipOperation>(op));
}

void QPainter_SetClipRegion2(QPainter* self, QRegion* param1, uintptr_t op) {
	self->setClipRegion(*param1, static_cast<Qt::ClipOperation>(op));
}

void QPainter_SetClipPath2(QPainter* self, QPainterPath* path, uintptr_t op) {
	self->setClipPath(*path, static_cast<Qt::ClipOperation>(op));
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

void QPainter_DrawPolygon32(QPainter* self, QPointF* points, int pointCount, uintptr_t fillRule) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<Qt::FillRule>(fillRule));
}

void QPainter_DrawPolygon33(QPainter* self, QPoint* points, int pointCount, uintptr_t fillRule) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<Qt::FillRule>(fillRule));
}

void QPainter_DrawRoundedRect4(QPainter* self, QRectF* rect, double xRadius, double yRadius, uintptr_t mode) {
	self->drawRoundedRect(*rect, static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainter_DrawRoundedRect7(QPainter* self, int x, int y, int w, int h, double xRadius, double yRadius, uintptr_t mode) {
	self->drawRoundedRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainter_DrawRoundedRect42(QPainter* self, QRect* rect, double xRadius, double yRadius, uintptr_t mode) {
	self->drawRoundedRect(*rect, static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
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

void QPainter_DrawPixmapFragments4(QPainter* self, QPainter__PixmapFragment* fragments, int fragmentCount, QPixmap* pixmap, int hints) {
	self->drawPixmapFragments(fragments, static_cast<int>(fragmentCount), *pixmap, static_cast<QPainter::PixmapFragmentHints>(hints));
}

void QPainter_DrawImage42(QPainter* self, QRectF* targetRect, QImage* image, QRectF* sourceRect, int flags) {
	self->drawImage(*targetRect, *image, *sourceRect, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPainter_DrawImage43(QPainter* self, QRect* targetRect, QImage* image, QRect* sourceRect, int flags) {
	self->drawImage(*targetRect, *image, *sourceRect, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPainter_DrawImage44(QPainter* self, QPointF* p, QImage* image, QRectF* sr, int flags) {
	self->drawImage(*p, *image, *sr, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPainter_DrawImage45(QPainter* self, QPoint* p, QImage* image, QRect* sr, int flags) {
	self->drawImage(*p, *image, *sr, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPainter_DrawImage46(QPainter* self, int x, int y, QImage* image, int sx) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx));
}

void QPainter_DrawImage52(QPainter* self, int x, int y, QImage* image, int sx, int sy) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx), static_cast<int>(sy));
}

void QPainter_DrawImage62(QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw));
}

void QPainter_DrawImage72(QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw, int sh) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw), static_cast<int>(sh));
}

void QPainter_DrawImage82(QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw, int sh, int flags) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw), static_cast<int>(sh), static_cast<Qt::ImageConversionFlags>(flags));
}

void QPainter_DrawText42(QPainter* self, QRectF* r, int flags, struct miqt_string* text, QRectF* br) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->drawText(*r, static_cast<int>(flags), text_QString, br);
}

void QPainter_DrawText43(QPainter* self, QRect* r, int flags, struct miqt_string* text, QRect* br) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->drawText(*r, static_cast<int>(flags), text_QString, br);
}

void QPainter_DrawText72(QPainter* self, int x, int y, int w, int h, int flags, struct miqt_string* text, QRect* br) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->drawText(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, br);
}

void QPainter_DrawText32(QPainter* self, QRectF* r, struct miqt_string* text, QTextOption* o) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	self->drawText(*r, text_QString, *o);
}

QRectF* QPainter_BoundingRect32(QPainter* self, QRectF* rect, struct miqt_string* text, QTextOption* o) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QRectF _ret = self->boundingRect(*rect, text_QString, *o);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

void QPainter_SetRenderHint2(QPainter* self, uintptr_t hint, bool on) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint), on);
}

void QPainter_SetRenderHints2(QPainter* self, int hints, bool on) {
	self->setRenderHints(static_cast<QPainter::RenderHints>(hints), on);
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

QPainter__PixmapFragment* QPainter__PixmapFragment_Create(QPointF* pos, QRectF* sourceRect) {
	QPainter::PixmapFragment _ret = QPainter::PixmapFragment::create(*pos, *sourceRect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainter::PixmapFragment*>(new QPainter::PixmapFragment(_ret));
}

QPainter__PixmapFragment* QPainter__PixmapFragment_Create3(QPointF* pos, QRectF* sourceRect, double scaleX) {
	QPainter::PixmapFragment _ret = QPainter::PixmapFragment::create(*pos, *sourceRect, static_cast<qreal>(scaleX));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainter::PixmapFragment*>(new QPainter::PixmapFragment(_ret));
}

QPainter__PixmapFragment* QPainter__PixmapFragment_Create4(QPointF* pos, QRectF* sourceRect, double scaleX, double scaleY) {
	QPainter::PixmapFragment _ret = QPainter::PixmapFragment::create(*pos, *sourceRect, static_cast<qreal>(scaleX), static_cast<qreal>(scaleY));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainter::PixmapFragment*>(new QPainter::PixmapFragment(_ret));
}

QPainter__PixmapFragment* QPainter__PixmapFragment_Create5(QPointF* pos, QRectF* sourceRect, double scaleX, double scaleY, double rotation) {
	QPainter::PixmapFragment _ret = QPainter::PixmapFragment::create(*pos, *sourceRect, static_cast<qreal>(scaleX), static_cast<qreal>(scaleY), static_cast<qreal>(rotation));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainter::PixmapFragment*>(new QPainter::PixmapFragment(_ret));
}

QPainter__PixmapFragment* QPainter__PixmapFragment_Create6(QPointF* pos, QRectF* sourceRect, double scaleX, double scaleY, double rotation, double opacity) {
	QPainter::PixmapFragment _ret = QPainter::PixmapFragment::create(*pos, *sourceRect, static_cast<qreal>(scaleX), static_cast<qreal>(scaleY), static_cast<qreal>(rotation), static_cast<qreal>(opacity));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainter::PixmapFragment*>(new QPainter::PixmapFragment(_ret));
}

void QPainter__PixmapFragment_Delete(QPainter__PixmapFragment* self) {
	delete self;
}

