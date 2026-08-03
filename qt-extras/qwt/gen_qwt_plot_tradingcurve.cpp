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
#include <qwt_plot_tradingcurve.h>
#include "gen_qwt_plot_tradingcurve.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotTradingCurve* QwtPlotTradingCurve_new() {
	return new (std::nothrow) QwtPlotTradingCurve();
}

QwtPlotTradingCurve* QwtPlotTradingCurve_new2(QwtText* title) {
	return new (std::nothrow) QwtPlotTradingCurve(*title);
}

QwtPlotTradingCurve* QwtPlotTradingCurve_new3(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) QwtPlotTradingCurve(title_QString);
}

void QwtPlotTradingCurve_virtbase(QwtPlotTradingCurve* src, QwtPlotSeriesItem** outptr_QwtPlotSeriesItem) {
	*outptr_QwtPlotSeriesItem = static_cast<QwtPlotSeriesItem*>(src);
}

int QwtPlotTradingCurve_rtti(const QwtPlotTradingCurve* self) {
	return self->rtti();
}

void QwtPlotTradingCurve_setPaintAttribute(QwtPlotTradingCurve* self, int param1) {
	self->setPaintAttribute(static_cast<QwtPlotTradingCurve::PaintAttribute>(param1));
}

bool QwtPlotTradingCurve_testPaintAttribute(const QwtPlotTradingCurve* self, int param1) {
	return self->testPaintAttribute(static_cast<QwtPlotTradingCurve::PaintAttribute>(param1));
}

void QwtPlotTradingCurve_setSamples(QwtPlotTradingCurve* self, struct miqt_array /* of QwtOHLCSample* */  samples) {
	QVector<QwtOHLCSample> samples_QList;
	samples_QList.reserve(samples.len);
	QwtOHLCSample** samples_arr = static_cast<QwtOHLCSample**>(samples.data);
	for(size_t i = 0; i < samples.len; ++i) {
		samples_QList.push_back(*(samples_arr[i]));
	}
	self->setSamples(samples_QList);
}

void QwtPlotTradingCurve_setSymbolStyle(QwtPlotTradingCurve* self, int style) {
	self->setSymbolStyle(static_cast<QwtPlotTradingCurve::SymbolStyle>(style));
}

int QwtPlotTradingCurve_symbolStyle(const QwtPlotTradingCurve* self) {
	QwtPlotTradingCurve::SymbolStyle _ret = self->symbolStyle();
	return static_cast<int>(_ret);
}

void QwtPlotTradingCurve_setSymbolPen(QwtPlotTradingCurve* self, QColor* param1) {
	self->setSymbolPen(*param1);
}

void QwtPlotTradingCurve_setSymbolPenWithSymbolPen(QwtPlotTradingCurve* self, QPen* symbolPen) {
	self->setSymbolPen(*symbolPen);
}

QPen* QwtPlotTradingCurve_symbolPen(const QwtPlotTradingCurve* self) {
	return new QPen(self->symbolPen());
}

void QwtPlotTradingCurve_setSymbolBrush(QwtPlotTradingCurve* self, int param1, QBrush* param2) {
	self->setSymbolBrush(static_cast<QwtPlotTradingCurve::Direction>(param1), *param2);
}

QBrush* QwtPlotTradingCurve_symbolBrush(const QwtPlotTradingCurve* self, int param1) {
	return new QBrush(self->symbolBrush(static_cast<QwtPlotTradingCurve::Direction>(param1)));
}

void QwtPlotTradingCurve_setSymbolExtent(QwtPlotTradingCurve* self, double symbolExtent) {
	self->setSymbolExtent(static_cast<double>(symbolExtent));
}

double QwtPlotTradingCurve_symbolExtent(const QwtPlotTradingCurve* self) {
	return self->symbolExtent();
}

void QwtPlotTradingCurve_setMinSymbolWidth(QwtPlotTradingCurve* self, double minSymbolWidth) {
	self->setMinSymbolWidth(static_cast<double>(minSymbolWidth));
}

double QwtPlotTradingCurve_minSymbolWidth(const QwtPlotTradingCurve* self) {
	return self->minSymbolWidth();
}

void QwtPlotTradingCurve_setMaxSymbolWidth(QwtPlotTradingCurve* self, double maxSymbolWidth) {
	self->setMaxSymbolWidth(static_cast<double>(maxSymbolWidth));
}

double QwtPlotTradingCurve_maxSymbolWidth(const QwtPlotTradingCurve* self) {
	return self->maxSymbolWidth();
}

QRectF* QwtPlotTradingCurve_boundingRect(const QwtPlotTradingCurve* self) {
	return new QRectF(self->boundingRect());
}

QwtGraphic* QwtPlotTradingCurve_legendIcon(const QwtPlotTradingCurve* self, int index, QSizeF* param2) {
	return new QwtGraphic(self->legendIcon(static_cast<int>(index), *param2));
}

void QwtPlotTradingCurve_setPaintAttribute2(QwtPlotTradingCurve* self, int param1, bool on) {
	self->setPaintAttribute(static_cast<QwtPlotTradingCurve::PaintAttribute>(param1), on);
}

void QwtPlotTradingCurve_setSymbolPen2(QwtPlotTradingCurve* self, QColor* param1, double width) {
	self->setSymbolPen(*param1, static_cast<qreal>(width));
}

void QwtPlotTradingCurve_setSymbolPen3(QwtPlotTradingCurve* self, QColor* param1, double width, int param3) {
	self->setSymbolPen(*param1, static_cast<qreal>(width), static_cast<Qt::PenStyle>(param3));
}

void QwtPlotTradingCurve_delete(QwtPlotTradingCurve* self) {
	delete self;
}

