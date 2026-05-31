#include <QBrush>
#include <QList>
#include <QPainter>
#include <QPointF>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVector>
#include <qwt_plot_barchart.h>
#include "gen_qwt_plot_barchart.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotBarChart* QwtPlotBarChart_new() {
	return new (std::nothrow) QwtPlotBarChart();
}

QwtPlotBarChart* QwtPlotBarChart_new2(QwtText* title) {
	return new (std::nothrow) QwtPlotBarChart(*title);
}

QwtPlotBarChart* QwtPlotBarChart_new3(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) QwtPlotBarChart(title_QString);
}

void QwtPlotBarChart_virtbase(QwtPlotBarChart* src, QwtPlotAbstractBarChart** outptr_QwtPlotAbstractBarChart) {
	*outptr_QwtPlotAbstractBarChart = static_cast<QwtPlotAbstractBarChart*>(src);
}

int QwtPlotBarChart_rtti(const QwtPlotBarChart* self) {
	return self->rtti();
}

void QwtPlotBarChart_setSamples(QwtPlotBarChart* self, struct miqt_array /* of QPointF* */  samples) {
	QVector<QPointF> samples_QList;
	samples_QList.reserve(samples.len);
	QPointF** samples_arr = static_cast<QPointF**>(samples.data);
	for(size_t i = 0; i < samples.len; ++i) {
		samples_QList.push_back(*(samples_arr[i]));
	}
	self->setSamples(samples_QList);
}

void QwtPlotBarChart_setSamplesWithSamples(QwtPlotBarChart* self, struct miqt_array /* of double */  samples) {
	QVector<double> samples_QList;
	samples_QList.reserve(samples.len);
	double* samples_arr = static_cast<double*>(samples.data);
	for(size_t i = 0; i < samples.len; ++i) {
		samples_QList.push_back(static_cast<double>(samples_arr[i]));
	}
	self->setSamples(samples_QList);
}

void QwtPlotBarChart_setSymbol(QwtPlotBarChart* self, QwtColumnSymbol* symbol) {
	self->setSymbol(symbol);
}

QwtColumnSymbol* QwtPlotBarChart_symbol(const QwtPlotBarChart* self) {
	return (QwtColumnSymbol*) self->symbol();
}

void QwtPlotBarChart_setLegendMode(QwtPlotBarChart* self, int legendMode) {
	self->setLegendMode(static_cast<QwtPlotBarChart::LegendMode>(legendMode));
}

int QwtPlotBarChart_legendMode(const QwtPlotBarChart* self) {
	QwtPlotBarChart::LegendMode _ret = self->legendMode();
	return static_cast<int>(_ret);
}

QRectF* QwtPlotBarChart_boundingRect(const QwtPlotBarChart* self) {
	return new QRectF(self->boundingRect());
}

QwtColumnSymbol* QwtPlotBarChart_specialSymbol(const QwtPlotBarChart* self, int sampleIndex, QPointF* param2) {
	return self->specialSymbol(static_cast<int>(sampleIndex), *param2);
}

QwtText* QwtPlotBarChart_barTitle(const QwtPlotBarChart* self, int sampleIndex) {
	return new QwtText(self->barTitle(static_cast<int>(sampleIndex)));
}

void QwtPlotBarChart_delete(QwtPlotBarChart* self) {
	delete self;
}

