#include <QBrush>
#include <QColor>
#include <QPen>
#include <QSizeF>
#include <qwt_plot_grid.h>
#include "gen_qwt_plot_grid.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotGrid* QwtPlotGrid_new() {
	return new (std::nothrow) QwtPlotGrid();
}

void QwtPlotGrid_virtbase(QwtPlotGrid* src, QwtPlotItem** outptr_QwtPlotItem) {
	*outptr_QwtPlotItem = static_cast<QwtPlotItem*>(src);
}

int QwtPlotGrid_rtti(const QwtPlotGrid* self) {
	return self->rtti();
}

void QwtPlotGrid_enableX(QwtPlotGrid* self, bool param1) {
	self->enableX(param1);
}

bool QwtPlotGrid_xEnabled(const QwtPlotGrid* self) {
	return self->xEnabled();
}

void QwtPlotGrid_enableY(QwtPlotGrid* self, bool param1) {
	self->enableY(param1);
}

bool QwtPlotGrid_yEnabled(const QwtPlotGrid* self) {
	return self->yEnabled();
}

void QwtPlotGrid_enableXMin(QwtPlotGrid* self, bool param1) {
	self->enableXMin(param1);
}

bool QwtPlotGrid_xMinEnabled(const QwtPlotGrid* self) {
	return self->xMinEnabled();
}

void QwtPlotGrid_enableYMin(QwtPlotGrid* self, bool param1) {
	self->enableYMin(param1);
}

bool QwtPlotGrid_yMinEnabled(const QwtPlotGrid* self) {
	return self->yMinEnabled();
}

void QwtPlotGrid_setXDiv(QwtPlotGrid* self, QwtScaleDiv* xDiv) {
	self->setXDiv(*xDiv);
}

QwtScaleDiv* QwtPlotGrid_xScaleDiv(const QwtPlotGrid* self) {
	const QwtScaleDiv& _ret = self->xScaleDiv();
	// Cast returned reference into pointer
	return const_cast<QwtScaleDiv*>(&_ret);
}

void QwtPlotGrid_setYDiv(QwtPlotGrid* self, QwtScaleDiv* yDiv) {
	self->setYDiv(*yDiv);
}

QwtScaleDiv* QwtPlotGrid_yScaleDiv(const QwtPlotGrid* self) {
	const QwtScaleDiv& _ret = self->yScaleDiv();
	// Cast returned reference into pointer
	return const_cast<QwtScaleDiv*>(&_ret);
}

void QwtPlotGrid_setPen(QwtPlotGrid* self, QColor* param1) {
	self->setPen(*param1);
}

void QwtPlotGrid_setPenWithPen(QwtPlotGrid* self, QPen* pen) {
	self->setPen(*pen);
}

void QwtPlotGrid_setMajorPen(QwtPlotGrid* self, QColor* param1) {
	self->setMajorPen(*param1);
}

void QwtPlotGrid_setMajorPenWithMajorPen(QwtPlotGrid* self, QPen* majorPen) {
	self->setMajorPen(*majorPen);
}

QPen* QwtPlotGrid_majorPen(const QwtPlotGrid* self) {
	const QPen& _ret = self->majorPen();
	// Cast returned reference into pointer
	return const_cast<QPen*>(&_ret);
}

void QwtPlotGrid_setMinorPen(QwtPlotGrid* self, QColor* param1) {
	self->setMinorPen(*param1);
}

void QwtPlotGrid_setMinorPenWithMinorPen(QwtPlotGrid* self, QPen* minorPen) {
	self->setMinorPen(*minorPen);
}

QPen* QwtPlotGrid_minorPen(const QwtPlotGrid* self) {
	const QPen& _ret = self->minorPen();
	// Cast returned reference into pointer
	return const_cast<QPen*>(&_ret);
}

void QwtPlotGrid_updateScaleDiv(QwtPlotGrid* self, QwtScaleDiv* xScaleDiv, QwtScaleDiv* yScaleDiv) {
	self->updateScaleDiv(*xScaleDiv, *yScaleDiv);
}

void QwtPlotGrid_setPen2(QwtPlotGrid* self, QColor* param1, double width) {
	self->setPen(*param1, static_cast<qreal>(width));
}

void QwtPlotGrid_setPen3(QwtPlotGrid* self, QColor* param1, double width, int param3) {
	self->setPen(*param1, static_cast<qreal>(width), static_cast<Qt::PenStyle>(param3));
}

void QwtPlotGrid_setMajorPen2(QwtPlotGrid* self, QColor* param1, double width) {
	self->setMajorPen(*param1, static_cast<qreal>(width));
}

void QwtPlotGrid_setMajorPen3(QwtPlotGrid* self, QColor* param1, double width, int param3) {
	self->setMajorPen(*param1, static_cast<qreal>(width), static_cast<Qt::PenStyle>(param3));
}

void QwtPlotGrid_setMinorPen2(QwtPlotGrid* self, QColor* param1, double width) {
	self->setMinorPen(*param1, static_cast<qreal>(width));
}

void QwtPlotGrid_setMinorPen3(QwtPlotGrid* self, QColor* param1, double width, int param3) {
	self->setMinorPen(*param1, static_cast<qreal>(width), static_cast<Qt::PenStyle>(param3));
}

void QwtPlotGrid_delete(QwtPlotGrid* self) {
	delete self;
}

