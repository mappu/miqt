#include <QBrush>
#include <QColor>
#include <QPen>
#include <QPoint>
#include <QPointF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVector>
#include <qwt_plot_curve.h>
#include "gen_qwt_plot_curve.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotCurve* QwtPlotCurve_new() {
	return new (std::nothrow) QwtPlotCurve();
}

QwtPlotCurve* QwtPlotCurve_new2(QwtText* title) {
	return new (std::nothrow) QwtPlotCurve(*title);
}

QwtPlotCurve* QwtPlotCurve_new3(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) QwtPlotCurve(title_QString);
}

void QwtPlotCurve_virtbase(QwtPlotCurve* src, QwtPlotSeriesItem** outptr_QwtPlotSeriesItem) {
	*outptr_QwtPlotSeriesItem = static_cast<QwtPlotSeriesItem*>(src);
}

int QwtPlotCurve_rtti(const QwtPlotCurve* self) {
	return self->rtti();
}

void QwtPlotCurve_setPaintAttribute(QwtPlotCurve* self, int param1) {
	self->setPaintAttribute(static_cast<QwtPlotCurve::PaintAttribute>(param1));
}

bool QwtPlotCurve_testPaintAttribute(const QwtPlotCurve* self, int param1) {
	return self->testPaintAttribute(static_cast<QwtPlotCurve::PaintAttribute>(param1));
}

void QwtPlotCurve_setLegendAttribute(QwtPlotCurve* self, int param1) {
	self->setLegendAttribute(static_cast<QwtPlotCurve::LegendAttribute>(param1));
}

bool QwtPlotCurve_testLegendAttribute(const QwtPlotCurve* self, int param1) {
	return self->testLegendAttribute(static_cast<QwtPlotCurve::LegendAttribute>(param1));
}

void QwtPlotCurve_setRawSamples(QwtPlotCurve* self, const double* xData, const double* yData, int size) {
	self->setRawSamples(static_cast<const double*>(xData), static_cast<const double*>(yData), static_cast<int>(size));
}

void QwtPlotCurve_setSamples(QwtPlotCurve* self, const double* xData, const double* yData, int size) {
	self->setSamples(static_cast<const double*>(xData), static_cast<const double*>(yData), static_cast<int>(size));
}

void QwtPlotCurve_setSamples2(QwtPlotCurve* self, struct miqt_array /* of double */  xData, struct miqt_array /* of double */  yData) {
	QVector<double> xData_QList;
	xData_QList.reserve(xData.len);
	double* xData_arr = static_cast<double*>(xData.data);
	for(size_t i = 0; i < xData.len; ++i) {
		xData_QList.push_back(static_cast<double>(xData_arr[i]));
	}
	QVector<double> yData_QList;
	yData_QList.reserve(yData.len);
	double* yData_arr = static_cast<double*>(yData.data);
	for(size_t i = 0; i < yData.len; ++i) {
		yData_QList.push_back(static_cast<double>(yData_arr[i]));
	}
	self->setSamples(xData_QList, yData_QList);
}

void QwtPlotCurve_setSamplesWithSamples(QwtPlotCurve* self, struct miqt_array /* of QPointF* */  samples) {
	QVector<QPointF> samples_QList;
	samples_QList.reserve(samples.len);
	QPointF** samples_arr = static_cast<QPointF**>(samples.data);
	for(size_t i = 0; i < samples.len; ++i) {
		samples_QList.push_back(*(samples_arr[i]));
	}
	self->setSamples(samples_QList);
}

int QwtPlotCurve_closestPoint(const QwtPlotCurve* self, QPoint* pos) {
	return self->closestPoint(*pos);
}

double QwtPlotCurve_minXValue(const QwtPlotCurve* self) {
	return self->minXValue();
}

double QwtPlotCurve_maxXValue(const QwtPlotCurve* self) {
	return self->maxXValue();
}

double QwtPlotCurve_minYValue(const QwtPlotCurve* self) {
	return self->minYValue();
}

double QwtPlotCurve_maxYValue(const QwtPlotCurve* self) {
	return self->maxYValue();
}

void QwtPlotCurve_setCurveAttribute(QwtPlotCurve* self, int param1) {
	self->setCurveAttribute(static_cast<QwtPlotCurve::CurveAttribute>(param1));
}

bool QwtPlotCurve_testCurveAttribute(const QwtPlotCurve* self, int param1) {
	return self->testCurveAttribute(static_cast<QwtPlotCurve::CurveAttribute>(param1));
}

void QwtPlotCurve_setPen(QwtPlotCurve* self, QColor* param1) {
	self->setPen(*param1);
}

void QwtPlotCurve_setPenWithPen(QwtPlotCurve* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QwtPlotCurve_pen(const QwtPlotCurve* self) {
	const QPen& _ret = self->pen();
	// Cast returned reference into pointer
	return const_cast<QPen*>(&_ret);
}

void QwtPlotCurve_setBrush(QwtPlotCurve* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QwtPlotCurve_brush(const QwtPlotCurve* self) {
	const QBrush& _ret = self->brush();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

void QwtPlotCurve_setBaseline(QwtPlotCurve* self, double baseline) {
	self->setBaseline(static_cast<double>(baseline));
}

double QwtPlotCurve_baseline(const QwtPlotCurve* self) {
	return self->baseline();
}

void QwtPlotCurve_setStyle(QwtPlotCurve* self, int style) {
	self->setStyle(static_cast<QwtPlotCurve::CurveStyle>(style));
}

int QwtPlotCurve_style(const QwtPlotCurve* self) {
	QwtPlotCurve::CurveStyle _ret = self->style();
	return static_cast<int>(_ret);
}

void QwtPlotCurve_setSymbol(QwtPlotCurve* self, QwtSymbol* symbol) {
	self->setSymbol(symbol);
}

QwtSymbol* QwtPlotCurve_symbol(const QwtPlotCurve* self) {
	return (QwtSymbol*) self->symbol();
}

void QwtPlotCurve_setCurveFitter(QwtPlotCurve* self, QwtCurveFitter* curveFitter) {
	self->setCurveFitter(curveFitter);
}

QwtCurveFitter* QwtPlotCurve_curveFitter(const QwtPlotCurve* self) {
	return self->curveFitter();
}

QwtGraphic* QwtPlotCurve_legendIcon(const QwtPlotCurve* self, int index, QSizeF* param2) {
	return new QwtGraphic(self->legendIcon(static_cast<int>(index), *param2));
}

void QwtPlotCurve_setPaintAttribute2(QwtPlotCurve* self, int param1, bool on) {
	self->setPaintAttribute(static_cast<QwtPlotCurve::PaintAttribute>(param1), on);
}

void QwtPlotCurve_setLegendAttribute2(QwtPlotCurve* self, int param1, bool on) {
	self->setLegendAttribute(static_cast<QwtPlotCurve::LegendAttribute>(param1), on);
}

int QwtPlotCurve_closestPoint2(const QwtPlotCurve* self, QPoint* pos, double* dist) {
	return self->closestPoint(*pos, static_cast<double*>(dist));
}

void QwtPlotCurve_setCurveAttribute2(QwtPlotCurve* self, int param1, bool on) {
	self->setCurveAttribute(static_cast<QwtPlotCurve::CurveAttribute>(param1), on);
}

void QwtPlotCurve_setPen2(QwtPlotCurve* self, QColor* param1, double width) {
	self->setPen(*param1, static_cast<qreal>(width));
}

void QwtPlotCurve_setPen3(QwtPlotCurve* self, QColor* param1, double width, int param3) {
	self->setPen(*param1, static_cast<qreal>(width), static_cast<Qt::PenStyle>(param3));
}

void QwtPlotCurve_delete(QwtPlotCurve* self) {
	delete self;
}

