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
#include "qpaintengine.h"

#include "gen_qpaintengine.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

double QTextItem_Descent(QTextItem* self) {
	return const_cast<const QTextItem*>(self)->descent();
}

double QTextItem_Ascent(QTextItem* self) {
	return const_cast<const QTextItem*>(self)->ascent();
}

double QTextItem_Width(QTextItem* self) {
	return const_cast<const QTextItem*>(self)->width();
}

int QTextItem_RenderFlags(QTextItem* self) {
	QTextItem::RenderFlags ret = const_cast<const QTextItem*>(self)->renderFlags();
	return static_cast<int>(ret);
}

void QTextItem_Text(QTextItem* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextItem*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QFont* QTextItem_Font(QTextItem* self) {
	QFont ret = const_cast<const QTextItem*>(self)->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QTextItem_Delete(QTextItem* self) {
	delete self;
}

bool QPaintEngine_IsActive(QPaintEngine* self) {
	return const_cast<const QPaintEngine*>(self)->isActive();
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

void QPaintEngine_DrawPolygon(QPaintEngine* self, QPointF* points, int pointCount, uintptr_t mode) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
}

void QPaintEngine_DrawPolygon2(QPaintEngine* self, QPoint* points, int pointCount, uintptr_t mode) {
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

QPaintDevice* QPaintEngine_PaintDevice(QPaintEngine* self) {
	return const_cast<const QPaintEngine*>(self)->paintDevice();
}

void QPaintEngine_SetSystemClip(QPaintEngine* self, QRegion* baseClip) {
	self->setSystemClip(*baseClip);
}

QRegion* QPaintEngine_SystemClip(QPaintEngine* self) {
	QRegion ret = const_cast<const QPaintEngine*>(self)->systemClip();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

void QPaintEngine_SetSystemRect(QPaintEngine* self, QRect* rect) {
	self->setSystemRect(*rect);
}

QRect* QPaintEngine_SystemRect(QPaintEngine* self) {
	QRect ret = const_cast<const QPaintEngine*>(self)->systemRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QPoint* QPaintEngine_CoordinateOffset(QPaintEngine* self) {
	QPoint ret = const_cast<const QPaintEngine*>(self)->coordinateOffset();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

uintptr_t QPaintEngine_Type(QPaintEngine* self) {
	QPaintEngine::Type ret = const_cast<const QPaintEngine*>(self)->type();
	return static_cast<uintptr_t>(ret);
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

bool QPaintEngine_HasFeature(QPaintEngine* self, int feature) {
	return const_cast<const QPaintEngine*>(self)->hasFeature(static_cast<QPaintEngine::PaintEngineFeatures>(feature));
}

QPainter* QPaintEngine_Painter(QPaintEngine* self) {
	return const_cast<const QPaintEngine*>(self)->painter();
}

void QPaintEngine_SyncState(QPaintEngine* self) {
	self->syncState();
}

bool QPaintEngine_IsExtended(QPaintEngine* self) {
	return const_cast<const QPaintEngine*>(self)->isExtended();
}

void QPaintEngine_DrawImage4(QPaintEngine* self, QRectF* r, QImage* pm, QRectF* sr, int flags) {
	self->drawImage(*r, *pm, *sr, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPaintEngine_Delete(QPaintEngine* self) {
	delete self;
}

int QPaintEngineState_State(QPaintEngineState* self) {
	QPaintEngine::DirtyFlags ret = const_cast<const QPaintEngineState*>(self)->state();
	return static_cast<int>(ret);
}

QPen* QPaintEngineState_Pen(QPaintEngineState* self) {
	QPen ret = const_cast<const QPaintEngineState*>(self)->pen();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPen*>(new QPen(ret));
}

QBrush* QPaintEngineState_Brush(QPaintEngineState* self) {
	QBrush ret = const_cast<const QPaintEngineState*>(self)->brush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

QPointF* QPaintEngineState_BrushOrigin(QPaintEngineState* self) {
	QPointF ret = const_cast<const QPaintEngineState*>(self)->brushOrigin();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QBrush* QPaintEngineState_BackgroundBrush(QPaintEngineState* self) {
	QBrush ret = const_cast<const QPaintEngineState*>(self)->backgroundBrush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

uintptr_t QPaintEngineState_BackgroundMode(QPaintEngineState* self) {
	Qt::BGMode ret = const_cast<const QPaintEngineState*>(self)->backgroundMode();
	return static_cast<uintptr_t>(ret);
}

QFont* QPaintEngineState_Font(QPaintEngineState* self) {
	QFont ret = const_cast<const QPaintEngineState*>(self)->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

QMatrix* QPaintEngineState_Matrix(QPaintEngineState* self) {
	QMatrix ret = const_cast<const QPaintEngineState*>(self)->matrix();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(ret));
}

QTransform* QPaintEngineState_Transform(QPaintEngineState* self) {
	QTransform ret = const_cast<const QPaintEngineState*>(self)->transform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

uintptr_t QPaintEngineState_ClipOperation(QPaintEngineState* self) {
	Qt::ClipOperation ret = const_cast<const QPaintEngineState*>(self)->clipOperation();
	return static_cast<uintptr_t>(ret);
}

QRegion* QPaintEngineState_ClipRegion(QPaintEngineState* self) {
	QRegion ret = const_cast<const QPaintEngineState*>(self)->clipRegion();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QPainterPath* QPaintEngineState_ClipPath(QPaintEngineState* self) {
	QPainterPath ret = const_cast<const QPaintEngineState*>(self)->clipPath();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

bool QPaintEngineState_IsClipEnabled(QPaintEngineState* self) {
	return const_cast<const QPaintEngineState*>(self)->isClipEnabled();
}

int QPaintEngineState_RenderHints(QPaintEngineState* self) {
	QPainter::RenderHints ret = const_cast<const QPaintEngineState*>(self)->renderHints();
	return static_cast<int>(ret);
}

uintptr_t QPaintEngineState_CompositionMode(QPaintEngineState* self) {
	QPainter::CompositionMode ret = const_cast<const QPaintEngineState*>(self)->compositionMode();
	return static_cast<uintptr_t>(ret);
}

double QPaintEngineState_Opacity(QPaintEngineState* self) {
	return const_cast<const QPaintEngineState*>(self)->opacity();
}

QPainter* QPaintEngineState_Painter(QPaintEngineState* self) {
	return const_cast<const QPaintEngineState*>(self)->painter();
}

bool QPaintEngineState_BrushNeedsResolving(QPaintEngineState* self) {
	return const_cast<const QPaintEngineState*>(self)->brushNeedsResolving();
}

bool QPaintEngineState_PenNeedsResolving(QPaintEngineState* self) {
	return const_cast<const QPaintEngineState*>(self)->penNeedsResolving();
}

void QPaintEngineState_Delete(QPaintEngineState* self) {
	delete self;
}

