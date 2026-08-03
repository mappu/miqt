#include <QBrush>
#include <QColor>
#include <QPen>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVector>
#include <qwt_plot_intervalcurve.h>
#include "gen_qwt_plot_intervalcurve.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotIntervalCurve* QwtPlotIntervalCurve_new() {
	return new (std::nothrow) QwtPlotIntervalCurve();
}

QwtPlotIntervalCurve* QwtPlotIntervalCurve_new2(QwtText* title) {
	return new (std::nothrow) QwtPlotIntervalCurve(*title);
}

QwtPlotIntervalCurve* QwtPlotIntervalCurve_new3(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) QwtPlotIntervalCurve(title_QString);
}

void QwtPlotIntervalCurve_virtbase(QwtPlotIntervalCurve* src, QwtPlotSeriesItem** outptr_QwtPlotSeriesItem) {
	*outptr_QwtPlotSeriesItem = static_cast<QwtPlotSeriesItem*>(src);
}

int QwtPlotIntervalCurve_rtti(const QwtPlotIntervalCurve* self) {
	return self->rtti();
}

void QwtPlotIntervalCurve_setPaintAttribute(QwtPlotIntervalCurve* self, int param1) {
	self->setPaintAttribute(static_cast<QwtPlotIntervalCurve::PaintAttribute>(param1));
}

bool QwtPlotIntervalCurve_testPaintAttribute(const QwtPlotIntervalCurve* self, int param1) {
	return self->testPaintAttribute(static_cast<QwtPlotIntervalCurve::PaintAttribute>(param1));
}

void QwtPlotIntervalCurve_setSamples(QwtPlotIntervalCurve* self, struct miqt_array /* of QwtIntervalSample* */  samples) {
	QVector<QwtIntervalSample> samples_QList;
	samples_QList.reserve(samples.len);
	QwtIntervalSample** samples_arr = static_cast<QwtIntervalSample**>(samples.data);
	for(size_t i = 0; i < samples.len; ++i) {
		samples_QList.push_back(*(samples_arr[i]));
	}
	self->setSamples(samples_QList);
}

void QwtPlotIntervalCurve_setPen(QwtPlotIntervalCurve* self, QColor* param1) {
	self->setPen(*param1);
}

void QwtPlotIntervalCurve_setPenWithPen(QwtPlotIntervalCurve* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QwtPlotIntervalCurve_pen(const QwtPlotIntervalCurve* self) {
	const QPen& _ret = self->pen();
	// Cast returned reference into pointer
	return const_cast<QPen*>(&_ret);
}

void QwtPlotIntervalCurve_setBrush(QwtPlotIntervalCurve* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QwtPlotIntervalCurve_brush(const QwtPlotIntervalCurve* self) {
	const QBrush& _ret = self->brush();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

void QwtPlotIntervalCurve_setStyle(QwtPlotIntervalCurve* self, int style) {
	self->setStyle(static_cast<QwtPlotIntervalCurve::CurveStyle>(style));
}

int QwtPlotIntervalCurve_style(const QwtPlotIntervalCurve* self) {
	QwtPlotIntervalCurve::CurveStyle _ret = self->style();
	return static_cast<int>(_ret);
}

void QwtPlotIntervalCurve_setSymbol(QwtPlotIntervalCurve* self, QwtIntervalSymbol* symbol) {
	self->setSymbol(symbol);
}

QwtIntervalSymbol* QwtPlotIntervalCurve_symbol(const QwtPlotIntervalCurve* self) {
	return (QwtIntervalSymbol*) self->symbol();
}

QRectF* QwtPlotIntervalCurve_boundingRect(const QwtPlotIntervalCurve* self) {
	return new QRectF(self->boundingRect());
}

QwtGraphic* QwtPlotIntervalCurve_legendIcon(const QwtPlotIntervalCurve* self, int index, QSizeF* param2) {
	return new QwtGraphic(self->legendIcon(static_cast<int>(index), *param2));
}

void QwtPlotIntervalCurve_setPaintAttribute2(QwtPlotIntervalCurve* self, int param1, bool on) {
	self->setPaintAttribute(static_cast<QwtPlotIntervalCurve::PaintAttribute>(param1), on);
}

void QwtPlotIntervalCurve_setPen2(QwtPlotIntervalCurve* self, QColor* param1, double width) {
	self->setPen(*param1, static_cast<qreal>(width));
}

void QwtPlotIntervalCurve_setPen3(QwtPlotIntervalCurve* self, QColor* param1, double width, int param3) {
	self->setPen(*param1, static_cast<qreal>(width), static_cast<Qt::PenStyle>(param3));
}

void QwtPlotIntervalCurve_delete(QwtPlotIntervalCurve* self) {
	delete self;
}

