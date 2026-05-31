#include <QBrush>
#include <QColor>
#include <QPen>
#include <QRectF>
#include <QSizeF>
#include <qwt_plot_zoneitem.h>
#include "gen_qwt_plot_zoneitem.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotZoneItem* QwtPlotZoneItem_new() {
	return new (std::nothrow) QwtPlotZoneItem();
}

void QwtPlotZoneItem_virtbase(QwtPlotZoneItem* src, QwtPlotItem** outptr_QwtPlotItem) {
	*outptr_QwtPlotItem = static_cast<QwtPlotItem*>(src);
}

int QwtPlotZoneItem_rtti(const QwtPlotZoneItem* self) {
	return self->rtti();
}

void QwtPlotZoneItem_setOrientation(QwtPlotZoneItem* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QwtPlotZoneItem_orientation(QwtPlotZoneItem* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QwtPlotZoneItem_setInterval(QwtPlotZoneItem* self, double min, double max) {
	self->setInterval(static_cast<double>(min), static_cast<double>(max));
}

void QwtPlotZoneItem_setIntervalWithInterval(QwtPlotZoneItem* self, QwtInterval* interval) {
	self->setInterval(*interval);
}

QwtInterval* QwtPlotZoneItem_interval(const QwtPlotZoneItem* self) {
	return new QwtInterval(self->interval());
}

void QwtPlotZoneItem_setPen(QwtPlotZoneItem* self, QColor* param1) {
	self->setPen(*param1);
}

void QwtPlotZoneItem_setPenWithPen(QwtPlotZoneItem* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QwtPlotZoneItem_pen(const QwtPlotZoneItem* self) {
	const QPen& _ret = self->pen();
	// Cast returned reference into pointer
	return const_cast<QPen*>(&_ret);
}

void QwtPlotZoneItem_setBrush(QwtPlotZoneItem* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QwtPlotZoneItem_brush(const QwtPlotZoneItem* self) {
	const QBrush& _ret = self->brush();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QRectF* QwtPlotZoneItem_boundingRect(const QwtPlotZoneItem* self) {
	return new QRectF(self->boundingRect());
}

void QwtPlotZoneItem_setPen2(QwtPlotZoneItem* self, QColor* param1, double width) {
	self->setPen(*param1, static_cast<qreal>(width));
}

void QwtPlotZoneItem_setPen3(QwtPlotZoneItem* self, QColor* param1, double width, int param3) {
	self->setPen(*param1, static_cast<qreal>(width), static_cast<Qt::PenStyle>(param3));
}

void QwtPlotZoneItem_delete(QwtPlotZoneItem* self) {
	delete self;
}

