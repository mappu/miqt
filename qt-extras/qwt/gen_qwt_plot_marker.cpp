#include <QBrush>
#include <QColor>
#include <QPainter>
#include <QPen>
#include <QPointF>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qwt_plot_marker.h>
#include "gen_qwt_plot_marker.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotMarker* QwtPlotMarker_new() {
	return new (std::nothrow) QwtPlotMarker();
}

QwtPlotMarker* QwtPlotMarker_new2(QwtText* title) {
	return new (std::nothrow) QwtPlotMarker(*title);
}

QwtPlotMarker* QwtPlotMarker_new3(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) QwtPlotMarker(title_QString);
}

void QwtPlotMarker_virtbase(QwtPlotMarker* src, QwtPlotItem** outptr_QwtPlotItem) {
	*outptr_QwtPlotItem = static_cast<QwtPlotItem*>(src);
}

int QwtPlotMarker_rtti(const QwtPlotMarker* self) {
	return self->rtti();
}

double QwtPlotMarker_xValue(const QwtPlotMarker* self) {
	return self->xValue();
}

double QwtPlotMarker_yValue(const QwtPlotMarker* self) {
	return self->yValue();
}

struct miqt_qpointf QwtPlotMarker_value(const QwtPlotMarker* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->value());
}

void QwtPlotMarker_setXValue(QwtPlotMarker* self, double xValue) {
	self->setXValue(static_cast<double>(xValue));
}

void QwtPlotMarker_setYValue(QwtPlotMarker* self, double yValue) {
	self->setYValue(static_cast<double>(yValue));
}

void QwtPlotMarker_setValue(QwtPlotMarker* self, double param1, double param2) {
	self->setValue(static_cast<double>(param1), static_cast<double>(param2));
}

void QwtPlotMarker_setValueWithValue(QwtPlotMarker* self, struct miqt_qpointf value) {
	self->setValue(miqt_from_cabi<QPointF>(value));
}

void QwtPlotMarker_setLineStyle(QwtPlotMarker* self, int lineStyle) {
	self->setLineStyle(static_cast<QwtPlotMarker::LineStyle>(lineStyle));
}

int QwtPlotMarker_lineStyle(const QwtPlotMarker* self) {
	QwtPlotMarker::LineStyle _ret = self->lineStyle();
	return static_cast<int>(_ret);
}

void QwtPlotMarker_setLinePen(QwtPlotMarker* self, struct miqt_qcolor param1) {
	self->setLinePen(miqt_from_cabi<QColor>(param1));
}

void QwtPlotMarker_setLinePenWithLinePen(QwtPlotMarker* self, QPen* linePen) {
	self->setLinePen(*linePen);
}

QPen* QwtPlotMarker_linePen(const QwtPlotMarker* self) {
	const QPen& _ret = self->linePen();
	// Cast returned reference into pointer
	return const_cast<QPen*>(&_ret);
}

void QwtPlotMarker_setSymbol(QwtPlotMarker* self, QwtSymbol* symbol) {
	self->setSymbol(symbol);
}

QwtSymbol* QwtPlotMarker_symbol(const QwtPlotMarker* self) {
	return (QwtSymbol*) self->symbol();
}

void QwtPlotMarker_setLabel(QwtPlotMarker* self, QwtText* label) {
	self->setLabel(*label);
}

QwtText* QwtPlotMarker_label(const QwtPlotMarker* self) {
	return new QwtText(self->label());
}

void QwtPlotMarker_setLabelAlignment(QwtPlotMarker* self, int labelAlignment) {
	self->setLabelAlignment(static_cast<Qt::Alignment>(labelAlignment));
}

int QwtPlotMarker_labelAlignment(const QwtPlotMarker* self) {
	Qt::Alignment _ret = self->labelAlignment();
	return static_cast<int>(_ret);
}

void QwtPlotMarker_setLabelOrientation(QwtPlotMarker* self, int labelOrientation) {
	self->setLabelOrientation(static_cast<Qt::Orientation>(labelOrientation));
}

int QwtPlotMarker_labelOrientation(const QwtPlotMarker* self) {
	Qt::Orientation _ret = self->labelOrientation();
	return static_cast<int>(_ret);
}

void QwtPlotMarker_setSpacing(QwtPlotMarker* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

int QwtPlotMarker_spacing(const QwtPlotMarker* self) {
	return self->spacing();
}

struct miqt_qrectf QwtPlotMarker_boundingRect(const QwtPlotMarker* self) {
	return miqt_to_cabi<struct miqt_qrectf>(self->boundingRect());
}

QwtGraphic* QwtPlotMarker_legendIcon(const QwtPlotMarker* self, int index, struct miqt_qsizef param2) {
	return new QwtGraphic(self->legendIcon(static_cast<int>(index), miqt_from_cabi<QSizeF>(param2)));
}

void QwtPlotMarker_setLinePen2(QwtPlotMarker* self, struct miqt_qcolor param1, double width) {
	self->setLinePen(miqt_from_cabi<QColor>(param1), static_cast<qreal>(width));
}

void QwtPlotMarker_setLinePen3(QwtPlotMarker* self, struct miqt_qcolor param1, double width, int param3) {
	self->setLinePen(miqt_from_cabi<QColor>(param1), static_cast<qreal>(width), static_cast<Qt::PenStyle>(param3));
}

void QwtPlotMarker_delete(QwtPlotMarker* self) {
	delete self;
}

