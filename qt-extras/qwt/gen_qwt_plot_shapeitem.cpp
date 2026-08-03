#include <QBrush>
#include <QColor>
#include <QPainterPath>
#include <QPen>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qwt_plot_shapeitem.h>
#include "gen_qwt_plot_shapeitem.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotShapeItem* QwtPlotShapeItem_new() {
	return new (std::nothrow) QwtPlotShapeItem();
}

QwtPlotShapeItem* QwtPlotShapeItem_new2(QwtText* title) {
	return new (std::nothrow) QwtPlotShapeItem(*title);
}

QwtPlotShapeItem* QwtPlotShapeItem_new3(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) QwtPlotShapeItem(title_QString);
}

void QwtPlotShapeItem_virtbase(QwtPlotShapeItem* src, QwtPlotItem** outptr_QwtPlotItem) {
	*outptr_QwtPlotItem = static_cast<QwtPlotItem*>(src);
}

void QwtPlotShapeItem_setPaintAttribute(QwtPlotShapeItem* self, int param1) {
	self->setPaintAttribute(static_cast<QwtPlotShapeItem::PaintAttribute>(param1));
}

bool QwtPlotShapeItem_testPaintAttribute(const QwtPlotShapeItem* self, int param1) {
	return self->testPaintAttribute(static_cast<QwtPlotShapeItem::PaintAttribute>(param1));
}

void QwtPlotShapeItem_setLegendMode(QwtPlotShapeItem* self, int legendMode) {
	self->setLegendMode(static_cast<QwtPlotShapeItem::LegendMode>(legendMode));
}

int QwtPlotShapeItem_legendMode(const QwtPlotShapeItem* self) {
	QwtPlotShapeItem::LegendMode _ret = self->legendMode();
	return static_cast<int>(_ret);
}

void QwtPlotShapeItem_setRect(QwtPlotShapeItem* self, QRectF* rect) {
	self->setRect(*rect);
}

void QwtPlotShapeItem_setShape(QwtPlotShapeItem* self, QPainterPath* shape) {
	self->setShape(*shape);
}

QPainterPath* QwtPlotShapeItem_shape(const QwtPlotShapeItem* self) {
	return new QPainterPath(self->shape());
}

void QwtPlotShapeItem_setPen(QwtPlotShapeItem* self, QColor* param1) {
	self->setPen(*param1);
}

void QwtPlotShapeItem_setPenWithPen(QwtPlotShapeItem* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QwtPlotShapeItem_pen(const QwtPlotShapeItem* self) {
	return new QPen(self->pen());
}

void QwtPlotShapeItem_setBrush(QwtPlotShapeItem* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QwtPlotShapeItem_brush(const QwtPlotShapeItem* self) {
	return new QBrush(self->brush());
}

void QwtPlotShapeItem_setRenderTolerance(QwtPlotShapeItem* self, double renderTolerance) {
	self->setRenderTolerance(static_cast<double>(renderTolerance));
}

double QwtPlotShapeItem_renderTolerance(const QwtPlotShapeItem* self) {
	return self->renderTolerance();
}

QRectF* QwtPlotShapeItem_boundingRect(const QwtPlotShapeItem* self) {
	return new QRectF(self->boundingRect());
}

QwtGraphic* QwtPlotShapeItem_legendIcon(const QwtPlotShapeItem* self, int index, QSizeF* param2) {
	return new QwtGraphic(self->legendIcon(static_cast<int>(index), *param2));
}

int QwtPlotShapeItem_rtti(const QwtPlotShapeItem* self) {
	return self->rtti();
}

void QwtPlotShapeItem_setPaintAttribute2(QwtPlotShapeItem* self, int param1, bool on) {
	self->setPaintAttribute(static_cast<QwtPlotShapeItem::PaintAttribute>(param1), on);
}

void QwtPlotShapeItem_setPen2(QwtPlotShapeItem* self, QColor* param1, double width) {
	self->setPen(*param1, static_cast<qreal>(width));
}

void QwtPlotShapeItem_setPen3(QwtPlotShapeItem* self, QColor* param1, double width, int param3) {
	self->setPen(*param1, static_cast<qreal>(width), static_cast<Qt::PenStyle>(param3));
}

void QwtPlotShapeItem_delete(QwtPlotShapeItem* self) {
	delete self;
}

