#include <QBrush>
#include <QFont>
#include <QImage>
#include <QMatrix>
#include <QPaintEngineState>
#include <QPainterPath>
#include <QPen>
#include <QPixmap>
#include <QPointF>
#include <QRectF>
#include <QRegion>
#include <QTransform>
#define WORKAROUND_INNER_CLASS_DEFINITION_QwtPainterCommand__ImageData
#define WORKAROUND_INNER_CLASS_DEFINITION_QwtPainterCommand__PixmapData
#define WORKAROUND_INNER_CLASS_DEFINITION_QwtPainterCommand__StateData
#include <qwt_painter_command.h>
#include "gen_qwt_painter_command.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPainterCommand* QwtPainterCommand_new() {
	return new (std::nothrow) QwtPainterCommand();
}

QwtPainterCommand* QwtPainterCommand_new2(QPainterPath* param1) {
	return new (std::nothrow) QwtPainterCommand(*param1);
}

QwtPainterCommand* QwtPainterCommand_new3(QRectF* rect, QPixmap* param2, QRectF* subRect) {
	return new (std::nothrow) QwtPainterCommand(*rect, *param2, *subRect);
}

QwtPainterCommand* QwtPainterCommand_new4(QRectF* rect, QImage* param2, QRectF* subRect, int param4) {
	return new (std::nothrow) QwtPainterCommand(*rect, *param2, *subRect, static_cast<Qt::ImageConversionFlags>(param4));
}

QwtPainterCommand* QwtPainterCommand_new5(QPaintEngineState* param1) {
	return new (std::nothrow) QwtPainterCommand(*param1);
}

int QwtPainterCommand_type(const QwtPainterCommand* self) {
	QwtPainterCommand::Type _ret = self->type();
	return static_cast<int>(_ret);
}

QPainterPath* QwtPainterCommand_path(QwtPainterCommand* self) {
	return self->path();
}

QPainterPath* QwtPainterCommand_path2(const QwtPainterCommand* self) {
	return (QPainterPath*) self->path();
}

QwtPainterCommand__PixmapData* QwtPainterCommand_pixmapData(QwtPainterCommand* self) {
	return self->pixmapData();
}

QwtPainterCommand__PixmapData* QwtPainterCommand_pixmapData2(const QwtPainterCommand* self) {
	return (QwtPainterCommand__PixmapData*) self->pixmapData();
}

QwtPainterCommand__ImageData* QwtPainterCommand_imageData(QwtPainterCommand* self) {
	return self->imageData();
}

QwtPainterCommand__ImageData* QwtPainterCommand_imageData2(const QwtPainterCommand* self) {
	return (QwtPainterCommand__ImageData*) self->imageData();
}

QwtPainterCommand__StateData* QwtPainterCommand_stateData(QwtPainterCommand* self) {
	return self->stateData();
}

QwtPainterCommand__StateData* QwtPainterCommand_stateData2(const QwtPainterCommand* self) {
	return (QwtPainterCommand__StateData*) self->stateData();
}

void QwtPainterCommand_delete(QwtPainterCommand* self) {
	delete self;
}

QwtPainterCommand__PixmapData* QwtPainterCommand__PixmapData_new(QwtPainterCommand__PixmapData* param1) {
	return new (std::nothrow) QwtPainterCommand::PixmapData(*param1);
}

QRectF* QwtPainterCommand__PixmapData_rect(const QwtPainterCommand__PixmapData* self) {
	return new QRectF(self->rect);
}

void QwtPainterCommand__PixmapData_setRect(QwtPainterCommand__PixmapData* self, QRectF* rect) {
	self->rect = *rect;
}

QPixmap* QwtPainterCommand__PixmapData_pixmap(const QwtPainterCommand__PixmapData* self) {
	return new QPixmap(self->pixmap);
}

void QwtPainterCommand__PixmapData_setPixmap(QwtPainterCommand__PixmapData* self, QPixmap* pixmap) {
	self->pixmap = *pixmap;
}

QRectF* QwtPainterCommand__PixmapData_subRect(const QwtPainterCommand__PixmapData* self) {
	return new QRectF(self->subRect);
}

void QwtPainterCommand__PixmapData_setSubRect(QwtPainterCommand__PixmapData* self, QRectF* subRect) {
	self->subRect = *subRect;
}

void QwtPainterCommand__PixmapData_operatorAssign(QwtPainterCommand__PixmapData* self, QwtPainterCommand__PixmapData* param1) {
	self->operator=(*param1);
}

void QwtPainterCommand__PixmapData_delete(QwtPainterCommand__PixmapData* self) {
	delete self;
}

QwtPainterCommand__ImageData* QwtPainterCommand__ImageData_new(QwtPainterCommand__ImageData* param1) {
	return new (std::nothrow) QwtPainterCommand::ImageData(*param1);
}

QRectF* QwtPainterCommand__ImageData_rect(const QwtPainterCommand__ImageData* self) {
	return new QRectF(self->rect);
}

void QwtPainterCommand__ImageData_setRect(QwtPainterCommand__ImageData* self, QRectF* rect) {
	self->rect = *rect;
}

QImage* QwtPainterCommand__ImageData_image(const QwtPainterCommand__ImageData* self) {
	return new QImage(self->image);
}

void QwtPainterCommand__ImageData_setImage(QwtPainterCommand__ImageData* self, QImage* image) {
	self->image = *image;
}

QRectF* QwtPainterCommand__ImageData_subRect(const QwtPainterCommand__ImageData* self) {
	return new QRectF(self->subRect);
}

void QwtPainterCommand__ImageData_setSubRect(QwtPainterCommand__ImageData* self, QRectF* subRect) {
	self->subRect = *subRect;
}

int QwtPainterCommand__ImageData_flags(const QwtPainterCommand__ImageData* self) {
	Qt::ImageConversionFlags flags_ret = self->flags;
	return static_cast<int>(flags_ret);
}

void QwtPainterCommand__ImageData_setFlags(QwtPainterCommand__ImageData* self, int flags) {
	self->flags = static_cast<Qt::ImageConversionFlags>(flags);
}

void QwtPainterCommand__ImageData_operatorAssign(QwtPainterCommand__ImageData* self, QwtPainterCommand__ImageData* param1) {
	self->operator=(*param1);
}

void QwtPainterCommand__ImageData_delete(QwtPainterCommand__ImageData* self) {
	delete self;
}

QwtPainterCommand__StateData* QwtPainterCommand__StateData_new(QwtPainterCommand__StateData* param1) {
	return new (std::nothrow) QwtPainterCommand::StateData(*param1);
}

int QwtPainterCommand__StateData_flags(const QwtPainterCommand__StateData* self) {
	QPaintEngine::DirtyFlags flags_ret = self->flags;
	return static_cast<int>(flags_ret);
}

void QwtPainterCommand__StateData_setFlags(QwtPainterCommand__StateData* self, int flags) {
	self->flags = static_cast<QPaintEngine::DirtyFlags>(flags);
}

QPen* QwtPainterCommand__StateData_pen(const QwtPainterCommand__StateData* self) {
	return new QPen(self->pen);
}

void QwtPainterCommand__StateData_setPen(QwtPainterCommand__StateData* self, QPen* pen) {
	self->pen = *pen;
}

QBrush* QwtPainterCommand__StateData_brush(const QwtPainterCommand__StateData* self) {
	return new QBrush(self->brush);
}

void QwtPainterCommand__StateData_setBrush(QwtPainterCommand__StateData* self, QBrush* brush) {
	self->brush = *brush;
}

QPointF* QwtPainterCommand__StateData_brushOrigin(const QwtPainterCommand__StateData* self) {
	return new QPointF(self->brushOrigin);
}

void QwtPainterCommand__StateData_setBrushOrigin(QwtPainterCommand__StateData* self, QPointF* brushOrigin) {
	self->brushOrigin = *brushOrigin;
}

QBrush* QwtPainterCommand__StateData_backgroundBrush(const QwtPainterCommand__StateData* self) {
	return new QBrush(self->backgroundBrush);
}

void QwtPainterCommand__StateData_setBackgroundBrush(QwtPainterCommand__StateData* self, QBrush* backgroundBrush) {
	self->backgroundBrush = *backgroundBrush;
}

int QwtPainterCommand__StateData_backgroundMode(const QwtPainterCommand__StateData* self) {
	Qt::BGMode backgroundMode_ret = self->backgroundMode;
	return static_cast<int>(backgroundMode_ret);
}

void QwtPainterCommand__StateData_setBackgroundMode(QwtPainterCommand__StateData* self, int backgroundMode) {
	self->backgroundMode = static_cast<Qt::BGMode>(backgroundMode);
}

QFont* QwtPainterCommand__StateData_font(const QwtPainterCommand__StateData* self) {
	return new QFont(self->font);
}

void QwtPainterCommand__StateData_setFont(QwtPainterCommand__StateData* self, QFont* font) {
	self->font = *font;
}

QMatrix* QwtPainterCommand__StateData_matrix(const QwtPainterCommand__StateData* self) {
	return new QMatrix(self->matrix);
}

void QwtPainterCommand__StateData_setMatrix(QwtPainterCommand__StateData* self, QMatrix* matrix) {
	self->matrix = *matrix;
}

QTransform* QwtPainterCommand__StateData_transform(const QwtPainterCommand__StateData* self) {
	return new QTransform(self->transform);
}

void QwtPainterCommand__StateData_setTransform(QwtPainterCommand__StateData* self, QTransform* transform) {
	self->transform = *transform;
}

int QwtPainterCommand__StateData_clipOperation(const QwtPainterCommand__StateData* self) {
	Qt::ClipOperation clipOperation_ret = self->clipOperation;
	return static_cast<int>(clipOperation_ret);
}

void QwtPainterCommand__StateData_setClipOperation(QwtPainterCommand__StateData* self, int clipOperation) {
	self->clipOperation = static_cast<Qt::ClipOperation>(clipOperation);
}

QRegion* QwtPainterCommand__StateData_clipRegion(const QwtPainterCommand__StateData* self) {
	return new QRegion(self->clipRegion);
}

void QwtPainterCommand__StateData_setClipRegion(QwtPainterCommand__StateData* self, QRegion* clipRegion) {
	self->clipRegion = *clipRegion;
}

QPainterPath* QwtPainterCommand__StateData_clipPath(const QwtPainterCommand__StateData* self) {
	return new QPainterPath(self->clipPath);
}

void QwtPainterCommand__StateData_setClipPath(QwtPainterCommand__StateData* self, QPainterPath* clipPath) {
	self->clipPath = *clipPath;
}

bool QwtPainterCommand__StateData_isClipEnabled(const QwtPainterCommand__StateData* self) {
	return self->isClipEnabled;
}

void QwtPainterCommand__StateData_setIsClipEnabled(QwtPainterCommand__StateData* self, bool isClipEnabled) {
	self->isClipEnabled = isClipEnabled;
}

int QwtPainterCommand__StateData_renderHints(const QwtPainterCommand__StateData* self) {
	QPainter::RenderHints renderHints_ret = self->renderHints;
	return static_cast<int>(renderHints_ret);
}

void QwtPainterCommand__StateData_setRenderHints(QwtPainterCommand__StateData* self, int renderHints) {
	self->renderHints = static_cast<QPainter::RenderHints>(renderHints);
}

int QwtPainterCommand__StateData_compositionMode(const QwtPainterCommand__StateData* self) {
	QPainter::CompositionMode compositionMode_ret = self->compositionMode;
	return static_cast<int>(compositionMode_ret);
}

void QwtPainterCommand__StateData_setCompositionMode(QwtPainterCommand__StateData* self, int compositionMode) {
	self->compositionMode = static_cast<QPainter::CompositionMode>(compositionMode);
}

double QwtPainterCommand__StateData_opacity(const QwtPainterCommand__StateData* self) {
	qreal opacity_ret = self->opacity;
	return static_cast<double>(opacity_ret);
}

void QwtPainterCommand__StateData_setOpacity(QwtPainterCommand__StateData* self, double opacity) {
	self->opacity = static_cast<qreal>(opacity);
}

void QwtPainterCommand__StateData_operatorAssign(QwtPainterCommand__StateData* self, QwtPainterCommand__StateData* param1) {
	self->operator=(*param1);
}

void QwtPainterCommand__StateData_delete(QwtPainterCommand__StateData* self) {
	delete self;
}

