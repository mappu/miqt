#include <QBrush>
#include <QColor>
#include <QPainter>
#include <QPen>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVector>
#include <qwt_plot_histogram.h>
#include "gen_qwt_plot_histogram.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotHistogram* QwtPlotHistogram_new() {
	return new (std::nothrow) QwtPlotHistogram();
}

QwtPlotHistogram* QwtPlotHistogram_new2(QwtText* title) {
	return new (std::nothrow) QwtPlotHistogram(*title);
}

QwtPlotHistogram* QwtPlotHistogram_new3(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) QwtPlotHistogram(title_QString);
}

void QwtPlotHistogram_virtbase(QwtPlotHistogram* src, QwtPlotSeriesItem** outptr_QwtPlotSeriesItem) {
	*outptr_QwtPlotSeriesItem = static_cast<QwtPlotSeriesItem*>(src);
}

int QwtPlotHistogram_rtti(const QwtPlotHistogram* self) {
	return self->rtti();
}

void QwtPlotHistogram_setPen(QwtPlotHistogram* self, QColor* param1) {
	self->setPen(*param1);
}

void QwtPlotHistogram_setPenWithPen(QwtPlotHistogram* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QwtPlotHistogram_pen(const QwtPlotHistogram* self) {
	const QPen& _ret = self->pen();
	// Cast returned reference into pointer
	return const_cast<QPen*>(&_ret);
}

void QwtPlotHistogram_setBrush(QwtPlotHistogram* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QwtPlotHistogram_brush(const QwtPlotHistogram* self) {
	const QBrush& _ret = self->brush();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

void QwtPlotHistogram_setSamples(QwtPlotHistogram* self, struct miqt_array /* of QwtIntervalSample* */  samples) {
	QVector<QwtIntervalSample> samples_QList;
	samples_QList.reserve(samples.len);
	QwtIntervalSample** samples_arr = static_cast<QwtIntervalSample**>(samples.data);
	for(size_t i = 0; i < samples.len; ++i) {
		samples_QList.push_back(*(samples_arr[i]));
	}
	self->setSamples(samples_QList);
}

void QwtPlotHistogram_setBaseline(QwtPlotHistogram* self, double baseline) {
	self->setBaseline(static_cast<double>(baseline));
}

double QwtPlotHistogram_baseline(const QwtPlotHistogram* self) {
	return self->baseline();
}

void QwtPlotHistogram_setStyle(QwtPlotHistogram* self, int style) {
	self->setStyle(static_cast<QwtPlotHistogram::HistogramStyle>(style));
}

int QwtPlotHistogram_style(const QwtPlotHistogram* self) {
	QwtPlotHistogram::HistogramStyle _ret = self->style();
	return static_cast<int>(_ret);
}

void QwtPlotHistogram_setSymbol(QwtPlotHistogram* self, QwtColumnSymbol* symbol) {
	self->setSymbol(symbol);
}

QwtColumnSymbol* QwtPlotHistogram_symbol(const QwtPlotHistogram* self) {
	return (QwtColumnSymbol*) self->symbol();
}

QRectF* QwtPlotHistogram_boundingRect(const QwtPlotHistogram* self) {
	return new QRectF(self->boundingRect());
}

QwtGraphic* QwtPlotHistogram_legendIcon(const QwtPlotHistogram* self, int index, QSizeF* param2) {
	return new QwtGraphic(self->legendIcon(static_cast<int>(index), *param2));
}

void QwtPlotHistogram_setPen2(QwtPlotHistogram* self, QColor* param1, double width) {
	self->setPen(*param1, static_cast<qreal>(width));
}

void QwtPlotHistogram_setPen3(QwtPlotHistogram* self, QColor* param1, double width, int param3) {
	self->setPen(*param1, static_cast<qreal>(width), static_cast<Qt::PenStyle>(param3));
}

void QwtPlotHistogram_delete(QwtPlotHistogram* self) {
	delete self;
}

