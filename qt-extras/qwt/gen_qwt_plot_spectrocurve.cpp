#include <QBrush>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVector>
#include <qwt_plot_spectrocurve.h>
#include "gen_qwt_plot_spectrocurve.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotSpectroCurve* QwtPlotSpectroCurve_new() {
	return new (std::nothrow) QwtPlotSpectroCurve();
}

QwtPlotSpectroCurve* QwtPlotSpectroCurve_new2(QwtText* title) {
	return new (std::nothrow) QwtPlotSpectroCurve(*title);
}

QwtPlotSpectroCurve* QwtPlotSpectroCurve_new3(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) QwtPlotSpectroCurve(title_QString);
}

void QwtPlotSpectroCurve_virtbase(QwtPlotSpectroCurve* src, QwtPlotSeriesItem** outptr_QwtPlotSeriesItem) {
	*outptr_QwtPlotSeriesItem = static_cast<QwtPlotSeriesItem*>(src);
}

int QwtPlotSpectroCurve_rtti(const QwtPlotSpectroCurve* self) {
	return self->rtti();
}

void QwtPlotSpectroCurve_setPaintAttribute(QwtPlotSpectroCurve* self, int param1) {
	self->setPaintAttribute(static_cast<QwtPlotSpectroCurve::PaintAttribute>(param1));
}

bool QwtPlotSpectroCurve_testPaintAttribute(const QwtPlotSpectroCurve* self, int param1) {
	return self->testPaintAttribute(static_cast<QwtPlotSpectroCurve::PaintAttribute>(param1));
}

void QwtPlotSpectroCurve_setSamples(QwtPlotSpectroCurve* self, struct miqt_array /* of QwtPoint3D* */  samples) {
	QVector<QwtPoint3D> samples_QList;
	samples_QList.reserve(samples.len);
	QwtPoint3D** samples_arr = static_cast<QwtPoint3D**>(samples.data);
	for(size_t i = 0; i < samples.len; ++i) {
		samples_QList.push_back(*(samples_arr[i]));
	}
	self->setSamples(samples_QList);
}

void QwtPlotSpectroCurve_setColorMap(QwtPlotSpectroCurve* self, QwtColorMap* colorMap) {
	self->setColorMap(colorMap);
}

QwtColorMap* QwtPlotSpectroCurve_colorMap(const QwtPlotSpectroCurve* self) {
	return (QwtColorMap*) self->colorMap();
}

void QwtPlotSpectroCurve_setColorRange(QwtPlotSpectroCurve* self, QwtInterval* colorRange) {
	self->setColorRange(*colorRange);
}

QwtInterval* QwtPlotSpectroCurve_colorRange(const QwtPlotSpectroCurve* self) {
	QwtInterval& _ret = self->colorRange();
	// Cast returned reference into pointer
	return &_ret;
}

void QwtPlotSpectroCurve_setPenWidth(QwtPlotSpectroCurve* self, double penWidth) {
	self->setPenWidth(static_cast<double>(penWidth));
}

double QwtPlotSpectroCurve_penWidth(const QwtPlotSpectroCurve* self) {
	return self->penWidth();
}

void QwtPlotSpectroCurve_setPaintAttribute2(QwtPlotSpectroCurve* self, int param1, bool on) {
	self->setPaintAttribute(static_cast<QwtPlotSpectroCurve::PaintAttribute>(param1), on);
}

void QwtPlotSpectroCurve_delete(QwtPlotSpectroCurve* self) {
	delete self;
}

