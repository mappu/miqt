#include <QBrush>
#include <QFont>
#include <QImage>
#include <QLine>
#include <QLineF>
#include <QMatrix>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEngineState>
#include <QPainter>
#include <QPainterPath>
#include <QPen>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextItem>
#include <QTransform>
#include <qpaintengine.h>
#include "gen_qpaintengine.h"
#include "_cgo_export.h"

double QTextItem_Descent(const QTextItem* self) {
	qreal _ret = self->descent();
	return static_cast<double>(_ret);
}

double QTextItem_Ascent(const QTextItem* self) {
	qreal _ret = self->ascent();
	return static_cast<double>(_ret);
}

double QTextItem_Width(const QTextItem* self) {
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

int QTextItem_RenderFlags(const QTextItem* self) {
	QTextItem::RenderFlags _ret = self->renderFlags();
	return static_cast<int>(_ret);
}

struct miqt_string QTextItem_Text(const QTextItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QFont* QTextItem_Font(const QTextItem* self) {
	return new QFont(self->font());
}

void QTextItem_Delete(QTextItem* self) {
	delete self;
}

bool QPaintEngine_IsActive(const QPaintEngine* self) {
	return self->isActive();
}

void QPaintEngine_SetActive(QPaintEngine* self, bool newState) {
	self->setActive(newState);
}

bool QPaintEngine_Begin(QPaintEngine* self, QPaintDevice* pdev) {
	return self->begin(pdev);
}

bool QPaintEngine_End(QPaintEngine* self) {
	return self->end();
}

void QPaintEngine_UpdateState(QPaintEngine* self, QPaintEngineState* state) {
	self->updateState(*state);
}

void QPaintEngine_DrawRects(QPaintEngine* self, QRect* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPaintEngine_DrawRects2(QPaintEngine* self, QRectF* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPaintEngine_DrawLines(QPaintEngine* self, QLine* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPaintEngine_DrawLines2(QPaintEngine* self, QLineF* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPaintEngine_DrawEllipse(QPaintEngine* self, QRectF* r) {
	self->drawEllipse(*r);
}

void QPaintEngine_DrawEllipseWithQRect(QPaintEngine* self, QRect* r) {
	self->drawEllipse(*r);
}

void QPaintEngine_DrawPath(QPaintEngine* self, QPainterPath* path) {
	self->drawPath(*path);
}

void QPaintEngine_DrawPoints(QPaintEngine* self, QPointF* points, int pointCount) {
	self->drawPoints(points, static_cast<int>(pointCount));
}

void QPaintEngine_DrawPoints2(QPaintEngine* self, QPoint* points, int pointCount) {
	self->drawPoints(points, static_cast<int>(pointCount));
}

void QPaintEngine_DrawPolygon(QPaintEngine* self, QPointF* points, int pointCount, int mode) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
}

void QPaintEngine_DrawPolygon2(QPaintEngine* self, QPoint* points, int pointCount, int mode) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
}

void QPaintEngine_DrawPixmap(QPaintEngine* self, QRectF* r, QPixmap* pm, QRectF* sr) {
	self->drawPixmap(*r, *pm, *sr);
}

void QPaintEngine_DrawTextItem(QPaintEngine* self, QPointF* p, QTextItem* textItem) {
	self->drawTextItem(*p, *textItem);
}

void QPaintEngine_DrawTiledPixmap(QPaintEngine* self, QRectF* r, QPixmap* pixmap, QPointF* s) {
	self->drawTiledPixmap(*r, *pixmap, *s);
}

void QPaintEngine_DrawImage(QPaintEngine* self, QRectF* r, QImage* pm, QRectF* sr) {
	self->drawImage(*r, *pm, *sr);
}

void QPaintEngine_SetPaintDevice(QPaintEngine* self, QPaintDevice* device) {
	self->setPaintDevice(device);
}

QPaintDevice* QPaintEngine_PaintDevice(const QPaintEngine* self) {
	return self->paintDevice();
}

void QPaintEngine_SetSystemClip(QPaintEngine* self, QRegion* baseClip) {
	self->setSystemClip(*baseClip);
}

QRegion* QPaintEngine_SystemClip(const QPaintEngine* self) {
	return new QRegion(self->systemClip());
}

void QPaintEngine_SetSystemRect(QPaintEngine* self, QRect* rect) {
	self->setSystemRect(*rect);
}

QRect* QPaintEngine_SystemRect(const QPaintEngine* self) {
	return new QRect(self->systemRect());
}

QPoint* QPaintEngine_CoordinateOffset(const QPaintEngine* self) {
	return new QPoint(self->coordinateOffset());
}

int QPaintEngine_Type(const QPaintEngine* self) {
	QPaintEngine::Type _ret = self->type();
	return static_cast<int>(_ret);
}

void QPaintEngine_FixNegRect(QPaintEngine* self, int* x, int* y, int* w, int* h) {
	self->fix_neg_rect(static_cast<int*>(x), static_cast<int*>(y), static_cast<int*>(w), static_cast<int*>(h));
}

bool QPaintEngine_TestDirty(QPaintEngine* self, int df) {
	return self->testDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

void QPaintEngine_SetDirty(QPaintEngine* self, int df) {
	self->setDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

void QPaintEngine_ClearDirty(QPaintEngine* self, int df) {
	self->clearDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

bool QPaintEngine_HasFeature(const QPaintEngine* self, int feature) {
	return self->hasFeature(static_cast<QPaintEngine::PaintEngineFeatures>(feature));
}

QPainter* QPaintEngine_Painter(const QPaintEngine* self) {
	return self->painter();
}

void QPaintEngine_SyncState(QPaintEngine* self) {
	self->syncState();
}

bool QPaintEngine_IsExtended(const QPaintEngine* self) {
	return self->isExtended();
}

void QPaintEngine_DrawImage4(QPaintEngine* self, QRectF* r, QImage* pm, QRectF* sr, int flags) {
	self->drawImage(*r, *pm, *sr, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPaintEngine_Delete(QPaintEngine* self) {
	delete self;
}

int QPaintEngineState_State(const QPaintEngineState* self) {
	QPaintEngine::DirtyFlags _ret = self->state();
	return static_cast<int>(_ret);
}

QPen* QPaintEngineState_Pen(const QPaintEngineState* self) {
	return new QPen(self->pen());
}

QBrush* QPaintEngineState_Brush(const QPaintEngineState* self) {
	return new QBrush(self->brush());
}

QPointF* QPaintEngineState_BrushOrigin(const QPaintEngineState* self) {
	return new QPointF(self->brushOrigin());
}

QBrush* QPaintEngineState_BackgroundBrush(const QPaintEngineState* self) {
	return new QBrush(self->backgroundBrush());
}

int QPaintEngineState_BackgroundMode(const QPaintEngineState* self) {
	Qt::BGMode _ret = self->backgroundMode();
	return static_cast<int>(_ret);
}

QFont* QPaintEngineState_Font(const QPaintEngineState* self) {
	return new QFont(self->font());
}

QMatrix* QPaintEngineState_Matrix(const QPaintEngineState* self) {
	return new QMatrix(self->matrix());
}

QTransform* QPaintEngineState_Transform(const QPaintEngineState* self) {
	return new QTransform(self->transform());
}

int QPaintEngineState_ClipOperation(const QPaintEngineState* self) {
	Qt::ClipOperation _ret = self->clipOperation();
	return static_cast<int>(_ret);
}

QRegion* QPaintEngineState_ClipRegion(const QPaintEngineState* self) {
	return new QRegion(self->clipRegion());
}

QPainterPath* QPaintEngineState_ClipPath(const QPaintEngineState* self) {
	return new QPainterPath(self->clipPath());
}

bool QPaintEngineState_IsClipEnabled(const QPaintEngineState* self) {
	return self->isClipEnabled();
}

int QPaintEngineState_RenderHints(const QPaintEngineState* self) {
	QPainter::RenderHints _ret = self->renderHints();
	return static_cast<int>(_ret);
}

int QPaintEngineState_CompositionMode(const QPaintEngineState* self) {
	QPainter::CompositionMode _ret = self->compositionMode();
	return static_cast<int>(_ret);
}

double QPaintEngineState_Opacity(const QPaintEngineState* self) {
	qreal _ret = self->opacity();
	return static_cast<double>(_ret);
}

QPainter* QPaintEngineState_Painter(const QPaintEngineState* self) {
	return self->painter();
}

bool QPaintEngineState_BrushNeedsResolving(const QPaintEngineState* self) {
	return self->brushNeedsResolving();
}

bool QPaintEngineState_PenNeedsResolving(const QPaintEngineState* self) {
	return self->penNeedsResolving();
}

void QPaintEngineState_Delete(QPaintEngineState* self) {
	delete self;
}

