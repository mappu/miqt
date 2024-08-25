#include "gen_qpaintengine.h"
#include "qpaintengine.h"

#include <QBrush>
#include <QFont>
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
#include <QTextItem>
#include <QTransform>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

double QTextItem_Descent(QTextItem* self) {
	return self->descent();
}

double QTextItem_Ascent(QTextItem* self) {
	return self->ascent();
}

double QTextItem_Width(QTextItem* self) {
	return self->width();
}

void QTextItem_Text(QTextItem* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QFont* QTextItem_Font(QTextItem* self) {
	QFont ret = self->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QTextItem_Delete(QTextItem* self) {
	delete self;
}

bool QPaintEngine_IsActive(QPaintEngine* self) {
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

void QPaintEngine_DrawPixmap(QPaintEngine* self, QRectF* r, QPixmap* pm, QRectF* sr) {
	self->drawPixmap(*r, *pm, *sr);
}

void QPaintEngine_DrawTextItem(QPaintEngine* self, QPointF* p, QTextItem* textItem) {
	self->drawTextItem(*p, *textItem);
}

void QPaintEngine_DrawTiledPixmap(QPaintEngine* self, QRectF* r, QPixmap* pixmap, QPointF* s) {
	self->drawTiledPixmap(*r, *pixmap, *s);
}

void QPaintEngine_SetPaintDevice(QPaintEngine* self, QPaintDevice* device) {
	self->setPaintDevice(device);
}

QPaintDevice* QPaintEngine_PaintDevice(QPaintEngine* self) {
	return self->paintDevice();
}

void QPaintEngine_SetSystemClip(QPaintEngine* self, QRegion* baseClip) {
	self->setSystemClip(*baseClip);
}

QRegion* QPaintEngine_SystemClip(QPaintEngine* self) {
	QRegion ret = self->systemClip();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

void QPaintEngine_SetSystemRect(QPaintEngine* self, QRect* rect) {
	self->setSystemRect(*rect);
}

QRect* QPaintEngine_SystemRect(QPaintEngine* self) {
	QRect ret = self->systemRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QPoint* QPaintEngine_CoordinateOffset(QPaintEngine* self) {
	QPoint ret = self->coordinateOffset();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QPaintEngine_FixNegRect(QPaintEngine* self, int* x, int* y, int* w, int* h) {
	self->fix_neg_rect(static_cast<int*>(x), static_cast<int*>(y), static_cast<int*>(w), static_cast<int*>(h));
}

QPainter* QPaintEngine_Painter(QPaintEngine* self) {
	return self->painter();
}

void QPaintEngine_SyncState(QPaintEngine* self) {
	self->syncState();
}

bool QPaintEngine_IsExtended(QPaintEngine* self) {
	return self->isExtended();
}

void QPaintEngine_Delete(QPaintEngine* self) {
	delete self;
}

QPen* QPaintEngineState_Pen(QPaintEngineState* self) {
	QPen ret = self->pen();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPen*>(new QPen(ret));
}

QBrush* QPaintEngineState_Brush(QPaintEngineState* self) {
	QBrush ret = self->brush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

QPointF* QPaintEngineState_BrushOrigin(QPaintEngineState* self) {
	QPointF ret = self->brushOrigin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QBrush* QPaintEngineState_BackgroundBrush(QPaintEngineState* self) {
	QBrush ret = self->backgroundBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

QFont* QPaintEngineState_Font(QPaintEngineState* self) {
	QFont ret = self->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

QMatrix* QPaintEngineState_Matrix(QPaintEngineState* self) {
	QMatrix ret = self->matrix();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(ret));
}

QTransform* QPaintEngineState_Transform(QPaintEngineState* self) {
	QTransform ret = self->transform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QRegion* QPaintEngineState_ClipRegion(QPaintEngineState* self) {
	QRegion ret = self->clipRegion();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QPainterPath* QPaintEngineState_ClipPath(QPaintEngineState* self) {
	QPainterPath ret = self->clipPath();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

bool QPaintEngineState_IsClipEnabled(QPaintEngineState* self) {
	return self->isClipEnabled();
}

double QPaintEngineState_Opacity(QPaintEngineState* self) {
	return self->opacity();
}

QPainter* QPaintEngineState_Painter(QPaintEngineState* self) {
	return self->painter();
}

bool QPaintEngineState_BrushNeedsResolving(QPaintEngineState* self) {
	return self->brushNeedsResolving();
}

bool QPaintEngineState_PenNeedsResolving(QPaintEngineState* self) {
	return self->penNeedsResolving();
}

void QPaintEngineState_Delete(QPaintEngineState* self) {
	delete self;
}

