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
#include <qpainter.h>
#include "gen_qpainter.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPainter* QPainter_new() {
	return new QPainter();
}

QPainter* QPainter_new2(QPaintDevice* param1) {
	return new QPainter(param1);
}

QPaintDevice* QPainter_device(const QPainter* self) {
	return self->device();
}

bool QPainter_begin(QPainter* self, QPaintDevice* param1) {
	return self->begin(param1);
}

bool QPainter_end(QPainter* self) {
	return self->end();
}

bool QPainter_isActive(const QPainter* self) {
	return self->isActive();
}

void QPainter_initFrom(QPainter* self, QPaintDevice* device) {
	self->initFrom(device);
}

void QPainter_setCompositionMode(QPainter* self, int mode) {
	self->setCompositionMode(static_cast<QPainter::CompositionMode>(mode));
}

int QPainter_compositionMode(const QPainter* self) {
	QPainter::CompositionMode _ret = self->compositionMode();
	return static_cast<int>(_ret);
}

QFont* QPainter_font(const QPainter* self) {
	const QFont& _ret = self->font();
	// Cast returned reference into pointer
	return const_cast<QFont*>(&_ret);
}

void QPainter_setFont(QPainter* self, QFont* f) {
	self->setFont(*f);
}

QFontMetrics* QPainter_fontMetrics(const QPainter* self) {
	return new QFontMetrics(self->fontMetrics());
}

QFontInfo* QPainter_fontInfo(const QPainter* self) {
	return new QFontInfo(self->fontInfo());
}

void QPainter_setPen(QPainter* self, QColor* color) {
	self->setPen(*color);
}

void QPainter_setPenWithPen(QPainter* self, QPen* pen) {
	self->setPen(*pen);
}

void QPainter_setPenWithStyle(QPainter* self, int style) {
	self->setPen(static_cast<Qt::PenStyle>(style));
}

QPen* QPainter_pen(const QPainter* self) {
	const QPen& _ret = self->pen();
	// Cast returned reference into pointer
	return const_cast<QPen*>(&_ret);
}

void QPainter_setBrush(QPainter* self, QBrush* brush) {
	self->setBrush(*brush);
}

void QPainter_setBrushWithStyle(QPainter* self, int style) {
	self->setBrush(static_cast<Qt::BrushStyle>(style));
}

QBrush* QPainter_brush(const QPainter* self) {
	const QBrush& _ret = self->brush();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

void QPainter_setBackgroundMode(QPainter* self, int mode) {
	self->setBackgroundMode(static_cast<Qt::BGMode>(mode));
}

int QPainter_backgroundMode(const QPainter* self) {
	Qt::BGMode _ret = self->backgroundMode();
	return static_cast<int>(_ret);
}

QPoint* QPainter_brushOrigin(const QPainter* self) {
	return new QPoint(self->brushOrigin());
}

void QPainter_setBrushOrigin(QPainter* self, int x, int y) {
	self->setBrushOrigin(static_cast<int>(x), static_cast<int>(y));
}

void QPainter_setBrushOriginWithBrushOrigin(QPainter* self, QPoint* brushOrigin) {
	self->setBrushOrigin(*brushOrigin);
}

void QPainter_setBrushOrigin2(QPainter* self, QPointF* brushOrigin) {
	self->setBrushOrigin(*brushOrigin);
}

void QPainter_setBackground(QPainter* self, QBrush* bg) {
	self->setBackground(*bg);
}

QBrush* QPainter_background(const QPainter* self) {
	const QBrush& _ret = self->background();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

double QPainter_opacity(const QPainter* self) {
	qreal _ret = self->opacity();
	return static_cast<double>(_ret);
}

void QPainter_setOpacity(QPainter* self, double opacity) {
	self->setOpacity(static_cast<qreal>(opacity));
}

QRegion* QPainter_clipRegion(const QPainter* self) {
	return new QRegion(self->clipRegion());
}

QPainterPath* QPainter_clipPath(const QPainter* self) {
	return new QPainterPath(self->clipPath());
}

void QPainter_setClipRect(QPainter* self, QRectF* param1) {
	self->setClipRect(*param1);
}

void QPainter_setClipRectWithQRect(QPainter* self, QRect* param1) {
	self->setClipRect(*param1);
}

void QPainter_setClipRect2(QPainter* self, int x, int y, int w, int h) {
	self->setClipRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_setClipRegion(QPainter* self, QRegion* param1) {
	self->setClipRegion(*param1);
}

void QPainter_setClipPath(QPainter* self, QPainterPath* path) {
	self->setClipPath(*path);
}

void QPainter_setClipping(QPainter* self, bool enable) {
	self->setClipping(enable);
}

bool QPainter_hasClipping(const QPainter* self) {
	return self->hasClipping();
}

QRectF* QPainter_clipBoundingRect(const QPainter* self) {
	return new QRectF(self->clipBoundingRect());
}

void QPainter_save(QPainter* self) {
	self->save();
}

void QPainter_restore(QPainter* self) {
	self->restore();
}

void QPainter_setMatrix(QPainter* self, QMatrix* matrix) {
	self->setMatrix(*matrix);
}

QMatrix* QPainter_matrix(const QPainter* self) {
	const QMatrix& _ret = self->matrix();
	// Cast returned reference into pointer
	return const_cast<QMatrix*>(&_ret);
}

QMatrix* QPainter_deviceMatrix(const QPainter* self) {
	const QMatrix& _ret = self->deviceMatrix();
	// Cast returned reference into pointer
	return const_cast<QMatrix*>(&_ret);
}

void QPainter_resetMatrix(QPainter* self) {
	self->resetMatrix();
}

void QPainter_setTransform(QPainter* self, QTransform* transform) {
	self->setTransform(*transform);
}

QTransform* QPainter_transform(const QPainter* self) {
	const QTransform& _ret = self->transform();
	// Cast returned reference into pointer
	return const_cast<QTransform*>(&_ret);
}

QTransform* QPainter_deviceTransform(const QPainter* self) {
	const QTransform& _ret = self->deviceTransform();
	// Cast returned reference into pointer
	return const_cast<QTransform*>(&_ret);
}

void QPainter_resetTransform(QPainter* self) {
	self->resetTransform();
}

void QPainter_setWorldMatrix(QPainter* self, QMatrix* matrix) {
	self->setWorldMatrix(*matrix);
}

QMatrix* QPainter_worldMatrix(const QPainter* self) {
	const QMatrix& _ret = self->worldMatrix();
	// Cast returned reference into pointer
	return const_cast<QMatrix*>(&_ret);
}

QMatrix* QPainter_combinedMatrix(const QPainter* self) {
	return new QMatrix(self->combinedMatrix());
}

void QPainter_setMatrixEnabled(QPainter* self, bool enabled) {
	self->setMatrixEnabled(enabled);
}

bool QPainter_matrixEnabled(const QPainter* self) {
	return self->matrixEnabled();
}

void QPainter_setWorldTransform(QPainter* self, QTransform* matrix) {
	self->setWorldTransform(*matrix);
}

QTransform* QPainter_worldTransform(const QPainter* self) {
	const QTransform& _ret = self->worldTransform();
	// Cast returned reference into pointer
	return const_cast<QTransform*>(&_ret);
}

QTransform* QPainter_combinedTransform(const QPainter* self) {
	return new QTransform(self->combinedTransform());
}

void QPainter_setWorldMatrixEnabled(QPainter* self, bool enabled) {
	self->setWorldMatrixEnabled(enabled);
}

bool QPainter_worldMatrixEnabled(const QPainter* self) {
	return self->worldMatrixEnabled();
}

void QPainter_scale(QPainter* self, double sx, double sy) {
	self->scale(static_cast<qreal>(sx), static_cast<qreal>(sy));
}

void QPainter_shear(QPainter* self, double sh, double sv) {
	self->shear(static_cast<qreal>(sh), static_cast<qreal>(sv));
}

void QPainter_rotate(QPainter* self, double a) {
	self->rotate(static_cast<qreal>(a));
}

void QPainter_translate(QPainter* self, QPointF* offset) {
	self->translate(*offset);
}

void QPainter_translateWithOffset(QPainter* self, QPoint* offset) {
	self->translate(*offset);
}

void QPainter_translate2(QPainter* self, double dx, double dy) {
	self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QRect* QPainter_window(const QPainter* self) {
	return new QRect(self->window());
}

void QPainter_setWindow(QPainter* self, QRect* window) {
	self->setWindow(*window);
}

void QPainter_setWindow2(QPainter* self, int x, int y, int w, int h) {
	self->setWindow(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

QRect* QPainter_viewport(const QPainter* self) {
	return new QRect(self->viewport());
}

void QPainter_setViewport(QPainter* self, QRect* viewport) {
	self->setViewport(*viewport);
}

void QPainter_setViewport2(QPainter* self, int x, int y, int w, int h) {
	self->setViewport(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_setViewTransformEnabled(QPainter* self, bool enable) {
	self->setViewTransformEnabled(enable);
}

bool QPainter_viewTransformEnabled(const QPainter* self) {
	return self->viewTransformEnabled();
}

void QPainter_strokePath(QPainter* self, QPainterPath* path, QPen* pen) {
	self->strokePath(*path, *pen);
}

void QPainter_fillPath(QPainter* self, QPainterPath* path, QBrush* brush) {
	self->fillPath(*path, *brush);
}

void QPainter_drawPath(QPainter* self, QPainterPath* path) {
	self->drawPath(*path);
}

void QPainter_drawPoint(QPainter* self, QPointF* pt) {
	self->drawPoint(*pt);
}

void QPainter_drawPointWithQPoint(QPainter* self, QPoint* p) {
	self->drawPoint(*p);
}

void QPainter_drawPoint2(QPainter* self, int x, int y) {
	self->drawPoint(static_cast<int>(x), static_cast<int>(y));
}

void QPainter_drawPoints(QPainter* self, QPointF* points, int pointCount) {
	self->drawPoints(points, static_cast<int>(pointCount));
}

void QPainter_drawPoints2(QPainter* self, QPoint* points, int pointCount) {
	self->drawPoints(points, static_cast<int>(pointCount));
}

void QPainter_drawLine(QPainter* self, QLineF* line) {
	self->drawLine(*line);
}

void QPainter_drawLineWithLine(QPainter* self, QLine* line) {
	self->drawLine(*line);
}

void QPainter_drawLine2(QPainter* self, int x1, int y1, int x2, int y2) {
	self->drawLine(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

void QPainter_drawLine3(QPainter* self, QPoint* p1, QPoint* p2) {
	self->drawLine(*p1, *p2);
}

void QPainter_drawLine4(QPainter* self, QPointF* p1, QPointF* p2) {
	self->drawLine(*p1, *p2);
}

void QPainter_drawLines(QPainter* self, QLineF* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPainter_drawLinesWithLines(QPainter* self, struct miqt_array /* of QLineF* */  lines) {
	QVector<QLineF> lines_QList;
	lines_QList.reserve(lines.len);
	QLineF** lines_arr = static_cast<QLineF**>(lines.data);
	for(size_t i = 0; i < lines.len; ++i) {
		lines_QList.push_back(*(lines_arr[i]));
	}
	self->drawLines(lines_QList);
}

void QPainter_drawLines2(QPainter* self, QPointF* pointPairs, int lineCount) {
	self->drawLines(pointPairs, static_cast<int>(lineCount));
}

void QPainter_drawLinesWithPointPairs(QPainter* self, struct miqt_array /* of QPointF* */  pointPairs) {
	QVector<QPointF> pointPairs_QList;
	pointPairs_QList.reserve(pointPairs.len);
	QPointF** pointPairs_arr = static_cast<QPointF**>(pointPairs.data);
	for(size_t i = 0; i < pointPairs.len; ++i) {
		pointPairs_QList.push_back(*(pointPairs_arr[i]));
	}
	self->drawLines(pointPairs_QList);
}

void QPainter_drawLines3(QPainter* self, QLine* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPainter_drawLines4(QPainter* self, struct miqt_array /* of QLine* */  lines) {
	QVector<QLine> lines_QList;
	lines_QList.reserve(lines.len);
	QLine** lines_arr = static_cast<QLine**>(lines.data);
	for(size_t i = 0; i < lines.len; ++i) {
		lines_QList.push_back(*(lines_arr[i]));
	}
	self->drawLines(lines_QList);
}

void QPainter_drawLines5(QPainter* self, QPoint* pointPairs, int lineCount) {
	self->drawLines(pointPairs, static_cast<int>(lineCount));
}

void QPainter_drawLines6(QPainter* self, struct miqt_array /* of QPoint* */  pointPairs) {
	QVector<QPoint> pointPairs_QList;
	pointPairs_QList.reserve(pointPairs.len);
	QPoint** pointPairs_arr = static_cast<QPoint**>(pointPairs.data);
	for(size_t i = 0; i < pointPairs.len; ++i) {
		pointPairs_QList.push_back(*(pointPairs_arr[i]));
	}
	self->drawLines(pointPairs_QList);
}

void QPainter_drawRect(QPainter* self, QRectF* rect) {
	self->drawRect(*rect);
}

void QPainter_drawRect2(QPainter* self, int x1, int y1, int w, int h) {
	self->drawRect(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_drawRectWithRect(QPainter* self, QRect* rect) {
	self->drawRect(*rect);
}

void QPainter_drawRects(QPainter* self, QRectF* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPainter_drawRectsWithRectangles(QPainter* self, struct miqt_array /* of QRectF* */  rectangles) {
	QVector<QRectF> rectangles_QList;
	rectangles_QList.reserve(rectangles.len);
	QRectF** rectangles_arr = static_cast<QRectF**>(rectangles.data);
	for(size_t i = 0; i < rectangles.len; ++i) {
		rectangles_QList.push_back(*(rectangles_arr[i]));
	}
	self->drawRects(rectangles_QList);
}

void QPainter_drawRects2(QPainter* self, QRect* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPainter_drawRects3(QPainter* self, struct miqt_array /* of QRect* */  rectangles) {
	QVector<QRect> rectangles_QList;
	rectangles_QList.reserve(rectangles.len);
	QRect** rectangles_arr = static_cast<QRect**>(rectangles.data);
	for(size_t i = 0; i < rectangles.len; ++i) {
		rectangles_QList.push_back(*(rectangles_arr[i]));
	}
	self->drawRects(rectangles_QList);
}

void QPainter_drawEllipse(QPainter* self, QRectF* r) {
	self->drawEllipse(*r);
}

void QPainter_drawEllipseWithQRect(QPainter* self, QRect* r) {
	self->drawEllipse(*r);
}

void QPainter_drawEllipse2(QPainter* self, int x, int y, int w, int h) {
	self->drawEllipse(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_drawEllipse3(QPainter* self, QPointF* center, double rx, double ry) {
	self->drawEllipse(*center, static_cast<qreal>(rx), static_cast<qreal>(ry));
}

void QPainter_drawEllipse4(QPainter* self, QPoint* center, int rx, int ry) {
	self->drawEllipse(*center, static_cast<int>(rx), static_cast<int>(ry));
}

void QPainter_drawPolyline(QPainter* self, QPointF* points, int pointCount) {
	self->drawPolyline(points, static_cast<int>(pointCount));
}

void QPainter_drawPolyline2(QPainter* self, QPoint* points, int pointCount) {
	self->drawPolyline(points, static_cast<int>(pointCount));
}

void QPainter_drawPolygon(QPainter* self, QPointF* points, int pointCount) {
	self->drawPolygon(points, static_cast<int>(pointCount));
}

void QPainter_drawPolygon2(QPainter* self, QPoint* points, int pointCount) {
	self->drawPolygon(points, static_cast<int>(pointCount));
}

void QPainter_drawConvexPolygon(QPainter* self, QPointF* points, int pointCount) {
	self->drawConvexPolygon(points, static_cast<int>(pointCount));
}

void QPainter_drawConvexPolygon2(QPainter* self, QPoint* points, int pointCount) {
	self->drawConvexPolygon(points, static_cast<int>(pointCount));
}

void QPainter_drawArc(QPainter* self, QRectF* rect, int a, int alen) {
	self->drawArc(*rect, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawArc2(QPainter* self, QRect* param1, int a, int alen) {
	self->drawArc(*param1, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawArc3(QPainter* self, int x, int y, int w, int h, int a, int alen) {
	self->drawArc(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawPie(QPainter* self, QRectF* rect, int a, int alen) {
	self->drawPie(*rect, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawPie2(QPainter* self, int x, int y, int w, int h, int a, int alen) {
	self->drawPie(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawPie3(QPainter* self, QRect* param1, int a, int alen) {
	self->drawPie(*param1, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawChord(QPainter* self, QRectF* rect, int a, int alen) {
	self->drawChord(*rect, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawChord2(QPainter* self, int x, int y, int w, int h, int a, int alen) {
	self->drawChord(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawChord3(QPainter* self, QRect* param1, int a, int alen) {
	self->drawChord(*param1, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawRoundedRect(QPainter* self, QRectF* rect, double xRadius, double yRadius) {
	self->drawRoundedRect(*rect, static_cast<qreal>(xRadius), static_cast<qreal>(yRadius));
}

void QPainter_drawRoundedRect2(QPainter* self, int x, int y, int w, int h, double xRadius, double yRadius) {
	self->drawRoundedRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<qreal>(xRadius), static_cast<qreal>(yRadius));
}

void QPainter_drawRoundedRect3(QPainter* self, QRect* rect, double xRadius, double yRadius) {
	self->drawRoundedRect(*rect, static_cast<qreal>(xRadius), static_cast<qreal>(yRadius));
}

void QPainter_drawRoundRect(QPainter* self, QRectF* r) {
	self->drawRoundRect(*r);
}

void QPainter_drawRoundRect2(QPainter* self, int x, int y, int w, int h) {
	self->drawRoundRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_drawRoundRectWithQRect(QPainter* self, QRect* r) {
	self->drawRoundRect(*r);
}

void QPainter_drawTiledPixmap(QPainter* self, QRectF* rect, QPixmap* pm) {
	self->drawTiledPixmap(*rect, *pm);
}

void QPainter_drawTiledPixmap2(QPainter* self, int x, int y, int w, int h, QPixmap* param5) {
	self->drawTiledPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *param5);
}

void QPainter_drawTiledPixmap3(QPainter* self, QRect* param1, QPixmap* param2) {
	self->drawTiledPixmap(*param1, *param2);
}

void QPainter_drawPicture(QPainter* self, QPointF* p, QPicture* picture) {
	self->drawPicture(*p, *picture);
}

void QPainter_drawPicture2(QPainter* self, int x, int y, QPicture* picture) {
	self->drawPicture(static_cast<int>(x), static_cast<int>(y), *picture);
}

void QPainter_drawPicture3(QPainter* self, QPoint* p, QPicture* picture) {
	self->drawPicture(*p, *picture);
}

void QPainter_drawPixmap(QPainter* self, QRectF* targetRect, QPixmap* pixmap, QRectF* sourceRect) {
	self->drawPixmap(*targetRect, *pixmap, *sourceRect);
}

void QPainter_drawPixmap2(QPainter* self, QRect* targetRect, QPixmap* pixmap, QRect* sourceRect) {
	self->drawPixmap(*targetRect, *pixmap, *sourceRect);
}

void QPainter_drawPixmap3(QPainter* self, int x, int y, int w, int h, QPixmap* pm, int sx, int sy, int sw, int sh) {
	self->drawPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *pm, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw), static_cast<int>(sh));
}

void QPainter_drawPixmap4(QPainter* self, int x, int y, QPixmap* pm, int sx, int sy, int sw, int sh) {
	self->drawPixmap(static_cast<int>(x), static_cast<int>(y), *pm, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw), static_cast<int>(sh));
}

void QPainter_drawPixmap5(QPainter* self, QPointF* p, QPixmap* pm, QRectF* sr) {
	self->drawPixmap(*p, *pm, *sr);
}

void QPainter_drawPixmap6(QPainter* self, QPoint* p, QPixmap* pm, QRect* sr) {
	self->drawPixmap(*p, *pm, *sr);
}

void QPainter_drawPixmap7(QPainter* self, QPointF* p, QPixmap* pm) {
	self->drawPixmap(*p, *pm);
}

void QPainter_drawPixmap8(QPainter* self, QPoint* p, QPixmap* pm) {
	self->drawPixmap(*p, *pm);
}

void QPainter_drawPixmap9(QPainter* self, int x, int y, QPixmap* pm) {
	self->drawPixmap(static_cast<int>(x), static_cast<int>(y), *pm);
}

void QPainter_drawPixmap10(QPainter* self, QRect* r, QPixmap* pm) {
	self->drawPixmap(*r, *pm);
}

void QPainter_drawPixmap11(QPainter* self, int x, int y, int w, int h, QPixmap* pm) {
	self->drawPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *pm);
}

void QPainter_drawPixmapFragments(QPainter* self, QPainter__PixmapFragment* fragments, int fragmentCount, QPixmap* pixmap) {
	self->drawPixmapFragments(fragments, static_cast<int>(fragmentCount), *pixmap);
}

void QPainter_drawImage(QPainter* self, QRectF* targetRect, QImage* image, QRectF* sourceRect) {
	self->drawImage(*targetRect, *image, *sourceRect);
}

void QPainter_drawImage2(QPainter* self, QRect* targetRect, QImage* image, QRect* sourceRect) {
	self->drawImage(*targetRect, *image, *sourceRect);
}

void QPainter_drawImage3(QPainter* self, QPointF* p, QImage* image, QRectF* sr) {
	self->drawImage(*p, *image, *sr);
}

void QPainter_drawImage4(QPainter* self, QPoint* p, QImage* image, QRect* sr) {
	self->drawImage(*p, *image, *sr);
}

void QPainter_drawImage5(QPainter* self, QRectF* r, QImage* image) {
	self->drawImage(*r, *image);
}

void QPainter_drawImage6(QPainter* self, QRect* r, QImage* image) {
	self->drawImage(*r, *image);
}

void QPainter_drawImage7(QPainter* self, QPointF* p, QImage* image) {
	self->drawImage(*p, *image);
}

void QPainter_drawImage8(QPainter* self, QPoint* p, QImage* image) {
	self->drawImage(*p, *image);
}

void QPainter_drawImage9(QPainter* self, int x, int y, QImage* image) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image);
}

void QPainter_setLayoutDirection(QPainter* self, int direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

int QPainter_layoutDirection(const QPainter* self) {
	Qt::LayoutDirection _ret = self->layoutDirection();
	return static_cast<int>(_ret);
}

void QPainter_drawGlyphRun(QPainter* self, QPointF* position, QGlyphRun* glyphRun) {
	self->drawGlyphRun(*position, *glyphRun);
}

void QPainter_drawStaticText(QPainter* self, QPointF* topLeftPosition, QStaticText* staticText) {
	self->drawStaticText(*topLeftPosition, *staticText);
}

void QPainter_drawStaticText2(QPainter* self, QPoint* topLeftPosition, QStaticText* staticText) {
	self->drawStaticText(*topLeftPosition, *staticText);
}

void QPainter_drawStaticText3(QPainter* self, int left, int top, QStaticText* staticText) {
	self->drawStaticText(static_cast<int>(left), static_cast<int>(top), *staticText);
}

void QPainter_drawText(QPainter* self, QPointF* p, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	self->drawText(*p, s_QString);
}

void QPainter_drawText2(QPainter* self, QPoint* p, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	self->drawText(*p, s_QString);
}

void QPainter_drawText3(QPainter* self, int x, int y, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	self->drawText(static_cast<int>(x), static_cast<int>(y), s_QString);
}

void QPainter_drawText4(QPainter* self, QPointF* p, struct miqt_string str, int tf, int justificationPadding) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	self->drawText(*p, str_QString, static_cast<int>(tf), static_cast<int>(justificationPadding));
}

void QPainter_drawText5(QPainter* self, QRectF* r, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(*r, static_cast<int>(flags), text_QString);
}

void QPainter_drawText6(QPainter* self, QRect* r, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(*r, static_cast<int>(flags), text_QString);
}

void QPainter_drawText7(QPainter* self, int x, int y, int w, int h, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString);
}

void QPainter_drawText8(QPainter* self, QRectF* r, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(*r, text_QString);
}

QRectF* QPainter_boundingRect(QPainter* self, QRectF* rect, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRectF(self->boundingRect(*rect, static_cast<int>(flags), text_QString));
}

QRect* QPainter_boundingRect2(QPainter* self, QRect* rect, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(*rect, static_cast<int>(flags), text_QString));
}

QRect* QPainter_boundingRect3(QPainter* self, int x, int y, int w, int h, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString));
}

QRectF* QPainter_boundingRect4(QPainter* self, QRectF* rect, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRectF(self->boundingRect(*rect, text_QString));
}

void QPainter_drawTextItem(QPainter* self, QPointF* p, QTextItem* ti) {
	self->drawTextItem(*p, *ti);
}

void QPainter_drawTextItem2(QPainter* self, int x, int y, QTextItem* ti) {
	self->drawTextItem(static_cast<int>(x), static_cast<int>(y), *ti);
}

void QPainter_drawTextItem3(QPainter* self, QPoint* p, QTextItem* ti) {
	self->drawTextItem(*p, *ti);
}

void QPainter_fillRect(QPainter* self, QRectF* param1, QBrush* param2) {
	self->fillRect(*param1, *param2);
}

void QPainter_fillRect2(QPainter* self, int x, int y, int w, int h, QBrush* param5) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *param5);
}

void QPainter_fillRect3(QPainter* self, QRect* param1, QBrush* param2) {
	self->fillRect(*param1, *param2);
}

void QPainter_fillRect4(QPainter* self, QRectF* param1, QColor* color) {
	self->fillRect(*param1, *color);
}

void QPainter_fillRect5(QPainter* self, int x, int y, int w, int h, QColor* color) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *color);
}

void QPainter_fillRect6(QPainter* self, QRect* param1, QColor* color) {
	self->fillRect(*param1, *color);
}

void QPainter_fillRect7(QPainter* self, int x, int y, int w, int h, int c) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::GlobalColor>(c));
}

void QPainter_fillRect8(QPainter* self, QRect* r, int c) {
	self->fillRect(*r, static_cast<Qt::GlobalColor>(c));
}

void QPainter_fillRect9(QPainter* self, QRectF* r, int c) {
	self->fillRect(*r, static_cast<Qt::GlobalColor>(c));
}

void QPainter_fillRect10(QPainter* self, int x, int y, int w, int h, int style) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::BrushStyle>(style));
}

void QPainter_fillRect11(QPainter* self, QRect* r, int style) {
	self->fillRect(*r, static_cast<Qt::BrushStyle>(style));
}

void QPainter_fillRect12(QPainter* self, QRectF* r, int style) {
	self->fillRect(*r, static_cast<Qt::BrushStyle>(style));
}

void QPainter_fillRect13(QPainter* self, int x, int y, int w, int h, int preset) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<QGradient::Preset>(preset));
}

void QPainter_fillRect14(QPainter* self, QRect* r, int preset) {
	self->fillRect(*r, static_cast<QGradient::Preset>(preset));
}

void QPainter_fillRect15(QPainter* self, QRectF* r, int preset) {
	self->fillRect(*r, static_cast<QGradient::Preset>(preset));
}

void QPainter_eraseRect(QPainter* self, QRectF* param1) {
	self->eraseRect(*param1);
}

void QPainter_eraseRect2(QPainter* self, int x, int y, int w, int h) {
	self->eraseRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_eraseRectWithQRect(QPainter* self, QRect* param1) {
	self->eraseRect(*param1);
}

void QPainter_setRenderHint(QPainter* self, int hint) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint));
}

void QPainter_setRenderHints(QPainter* self, int hints) {
	self->setRenderHints(static_cast<QPainter::RenderHints>(hints));
}

int QPainter_renderHints(const QPainter* self) {
	QPainter::RenderHints _ret = self->renderHints();
	return static_cast<int>(_ret);
}

bool QPainter_testRenderHint(const QPainter* self, int hint) {
	return self->testRenderHint(static_cast<QPainter::RenderHint>(hint));
}

QPaintEngine* QPainter_paintEngine(const QPainter* self) {
	return self->paintEngine();
}

void QPainter_setRedirected(QPaintDevice* device, QPaintDevice* replacement) {
	QPainter::setRedirected(device, replacement);
}

QPaintDevice* QPainter_redirected(QPaintDevice* device) {
	return QPainter::redirected(device);
}

void QPainter_restoreRedirected(QPaintDevice* device) {
	QPainter::restoreRedirected(device);
}

void QPainter_beginNativePainting(QPainter* self) {
	self->beginNativePainting();
}

void QPainter_endNativePainting(QPainter* self) {
	self->endNativePainting();
}

void QPainter_setClipRect22(QPainter* self, QRectF* param1, int op) {
	self->setClipRect(*param1, static_cast<Qt::ClipOperation>(op));
}

void QPainter_setClipRect23(QPainter* self, QRect* param1, int op) {
	self->setClipRect(*param1, static_cast<Qt::ClipOperation>(op));
}

void QPainter_setClipRect5(QPainter* self, int x, int y, int w, int h, int op) {
	self->setClipRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::ClipOperation>(op));
}

void QPainter_setClipRegion2(QPainter* self, QRegion* param1, int op) {
	self->setClipRegion(*param1, static_cast<Qt::ClipOperation>(op));
}

void QPainter_setClipPath2(QPainter* self, QPainterPath* path, int op) {
	self->setClipPath(*path, static_cast<Qt::ClipOperation>(op));
}

void QPainter_setMatrix2(QPainter* self, QMatrix* matrix, bool combine) {
	self->setMatrix(*matrix, combine);
}

void QPainter_setTransform2(QPainter* self, QTransform* transform, bool combine) {
	self->setTransform(*transform, combine);
}

void QPainter_setWorldMatrix2(QPainter* self, QMatrix* matrix, bool combine) {
	self->setWorldMatrix(*matrix, combine);
}

void QPainter_setWorldTransform2(QPainter* self, QTransform* matrix, bool combine) {
	self->setWorldTransform(*matrix, combine);
}

void QPainter_drawPolygon32(QPainter* self, QPointF* points, int pointCount, int fillRule) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<Qt::FillRule>(fillRule));
}

void QPainter_drawPolygon33(QPainter* self, QPoint* points, int pointCount, int fillRule) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<Qt::FillRule>(fillRule));
}

void QPainter_drawRoundedRect4(QPainter* self, QRectF* rect, double xRadius, double yRadius, int mode) {
	self->drawRoundedRect(*rect, static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainter_drawRoundedRect7(QPainter* self, int x, int y, int w, int h, double xRadius, double yRadius, int mode) {
	self->drawRoundedRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainter_drawRoundedRect42(QPainter* self, QRect* rect, double xRadius, double yRadius, int mode) {
	self->drawRoundedRect(*rect, static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainter_drawRoundRect22(QPainter* self, QRectF* r, int xround) {
	self->drawRoundRect(*r, static_cast<int>(xround));
}

void QPainter_drawRoundRect3(QPainter* self, QRectF* r, int xround, int yround) {
	self->drawRoundRect(*r, static_cast<int>(xround), static_cast<int>(yround));
}

void QPainter_drawRoundRect5(QPainter* self, int x, int y, int w, int h, int param5) {
	self->drawRoundRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(param5));
}

void QPainter_drawRoundRect6(QPainter* self, int x, int y, int w, int h, int param5, int param6) {
	self->drawRoundRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(param5), static_cast<int>(param6));
}

void QPainter_drawRoundRect23(QPainter* self, QRect* r, int xround) {
	self->drawRoundRect(*r, static_cast<int>(xround));
}

void QPainter_drawRoundRect32(QPainter* self, QRect* r, int xround, int yround) {
	self->drawRoundRect(*r, static_cast<int>(xround), static_cast<int>(yround));
}

void QPainter_drawTiledPixmap32(QPainter* self, QRectF* rect, QPixmap* pm, QPointF* offset) {
	self->drawTiledPixmap(*rect, *pm, *offset);
}

void QPainter_drawTiledPixmap6(QPainter* self, int x, int y, int w, int h, QPixmap* param5, int sx) {
	self->drawTiledPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *param5, static_cast<int>(sx));
}

void QPainter_drawTiledPixmap7(QPainter* self, int x, int y, int w, int h, QPixmap* param5, int sx, int sy) {
	self->drawTiledPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *param5, static_cast<int>(sx), static_cast<int>(sy));
}

void QPainter_drawTiledPixmap33(QPainter* self, QRect* param1, QPixmap* param2, QPoint* param3) {
	self->drawTiledPixmap(*param1, *param2, *param3);
}

void QPainter_drawPixmapFragments4(QPainter* self, QPainter__PixmapFragment* fragments, int fragmentCount, QPixmap* pixmap, int hints) {
	self->drawPixmapFragments(fragments, static_cast<int>(fragmentCount), *pixmap, static_cast<QPainter::PixmapFragmentHints>(hints));
}

void QPainter_drawImage42(QPainter* self, QRectF* targetRect, QImage* image, QRectF* sourceRect, int flags) {
	self->drawImage(*targetRect, *image, *sourceRect, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPainter_drawImage43(QPainter* self, QRect* targetRect, QImage* image, QRect* sourceRect, int flags) {
	self->drawImage(*targetRect, *image, *sourceRect, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPainter_drawImage44(QPainter* self, QPointF* p, QImage* image, QRectF* sr, int flags) {
	self->drawImage(*p, *image, *sr, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPainter_drawImage45(QPainter* self, QPoint* p, QImage* image, QRect* sr, int flags) {
	self->drawImage(*p, *image, *sr, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPainter_drawImage46(QPainter* self, int x, int y, QImage* image, int sx) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx));
}

void QPainter_drawImage52(QPainter* self, int x, int y, QImage* image, int sx, int sy) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx), static_cast<int>(sy));
}

void QPainter_drawImage62(QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw));
}

void QPainter_drawImage72(QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw, int sh) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw), static_cast<int>(sh));
}

void QPainter_drawImage82(QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw, int sh, int flags) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw), static_cast<int>(sh), static_cast<Qt::ImageConversionFlags>(flags));
}

void QPainter_drawText42(QPainter* self, QRectF* r, int flags, struct miqt_string text, QRectF* br) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(*r, static_cast<int>(flags), text_QString, br);
}

void QPainter_drawText43(QPainter* self, QRect* r, int flags, struct miqt_string text, QRect* br) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(*r, static_cast<int>(flags), text_QString, br);
}

void QPainter_drawText72(QPainter* self, int x, int y, int w, int h, int flags, struct miqt_string text, QRect* br) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, br);
}

void QPainter_drawText32(QPainter* self, QRectF* r, struct miqt_string text, QTextOption* o) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(*r, text_QString, *o);
}

QRectF* QPainter_boundingRect32(QPainter* self, QRectF* rect, struct miqt_string text, QTextOption* o) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRectF(self->boundingRect(*rect, text_QString, *o));
}

void QPainter_setRenderHint2(QPainter* self, int hint, bool on) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint), on);
}

void QPainter_setRenderHints2(QPainter* self, int hints, bool on) {
	self->setRenderHints(static_cast<QPainter::RenderHints>(hints), on);
}

void QPainter_setRedirected3(QPaintDevice* device, QPaintDevice* replacement, QPoint* offset) {
	QPainter::setRedirected(device, replacement, *offset);
}

QPaintDevice* QPainter_redirected2(QPaintDevice* device, QPoint* offset) {
	return QPainter::redirected(device, offset);
}

void QPainter_delete(QPainter* self) {
	delete self;
}

QPainter__PixmapFragment* QPainter__PixmapFragment_create(QPointF* pos, QRectF* sourceRect) {
	return new QPainter::PixmapFragment(QPainter::PixmapFragment::create(*pos, *sourceRect));
}

QPainter__PixmapFragment* QPainter__PixmapFragment_create3(QPointF* pos, QRectF* sourceRect, double scaleX) {
	return new QPainter::PixmapFragment(QPainter::PixmapFragment::create(*pos, *sourceRect, static_cast<qreal>(scaleX)));
}

QPainter__PixmapFragment* QPainter__PixmapFragment_create4(QPointF* pos, QRectF* sourceRect, double scaleX, double scaleY) {
	return new QPainter::PixmapFragment(QPainter::PixmapFragment::create(*pos, *sourceRect, static_cast<qreal>(scaleX), static_cast<qreal>(scaleY)));
}

QPainter__PixmapFragment* QPainter__PixmapFragment_create5(QPointF* pos, QRectF* sourceRect, double scaleX, double scaleY, double rotation) {
	return new QPainter::PixmapFragment(QPainter::PixmapFragment::create(*pos, *sourceRect, static_cast<qreal>(scaleX), static_cast<qreal>(scaleY), static_cast<qreal>(rotation)));
}

QPainter__PixmapFragment* QPainter__PixmapFragment_create6(QPointF* pos, QRectF* sourceRect, double scaleX, double scaleY, double rotation, double opacity) {
	return new QPainter::PixmapFragment(QPainter::PixmapFragment::create(*pos, *sourceRect, static_cast<qreal>(scaleX), static_cast<qreal>(scaleY), static_cast<qreal>(rotation), static_cast<qreal>(opacity)));
}

void QPainter__PixmapFragment_delete(QPainter__PixmapFragment* self) {
	delete self;
}

