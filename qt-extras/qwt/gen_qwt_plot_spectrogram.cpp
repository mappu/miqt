#include <QBrush>
#include <QColor>
#include <QList>
#include <QPen>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qwt_plot_spectrogram.h>
#include "gen_qwt_plot_spectrogram.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotSpectrogram* QwtPlotSpectrogram_new() {
	return new (std::nothrow) QwtPlotSpectrogram();
}

QwtPlotSpectrogram* QwtPlotSpectrogram_new2(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) QwtPlotSpectrogram(title_QString);
}

void QwtPlotSpectrogram_virtbase(QwtPlotSpectrogram* src, QwtPlotRasterItem** outptr_QwtPlotRasterItem) {
	*outptr_QwtPlotRasterItem = static_cast<QwtPlotRasterItem*>(src);
}

void QwtPlotSpectrogram_setDisplayMode(QwtPlotSpectrogram* self, int param1) {
	self->setDisplayMode(static_cast<QwtPlotSpectrogram::DisplayMode>(param1));
}

bool QwtPlotSpectrogram_testDisplayMode(const QwtPlotSpectrogram* self, int param1) {
	return self->testDisplayMode(static_cast<QwtPlotSpectrogram::DisplayMode>(param1));
}

void QwtPlotSpectrogram_setData(QwtPlotSpectrogram* self, QwtRasterData* data) {
	self->setData(data);
}

QwtRasterData* QwtPlotSpectrogram_data(const QwtPlotSpectrogram* self) {
	return (QwtRasterData*) self->data();
}

QwtRasterData* QwtPlotSpectrogram_data2(QwtPlotSpectrogram* self) {
	return self->data();
}

void QwtPlotSpectrogram_setColorMap(QwtPlotSpectrogram* self, QwtColorMap* colorMap) {
	self->setColorMap(colorMap);
}

QwtColorMap* QwtPlotSpectrogram_colorMap(const QwtPlotSpectrogram* self) {
	return (QwtColorMap*) self->colorMap();
}

QwtInterval* QwtPlotSpectrogram_interval(const QwtPlotSpectrogram* self, int param1) {
	return new QwtInterval(self->interval(static_cast<Qt::Axis>(param1)));
}

QRectF* QwtPlotSpectrogram_pixelHint(const QwtPlotSpectrogram* self, QRectF* param1) {
	return new QRectF(self->pixelHint(*param1));
}

void QwtPlotSpectrogram_setDefaultContourPen(QwtPlotSpectrogram* self, QColor* param1) {
	self->setDefaultContourPen(*param1);
}

void QwtPlotSpectrogram_setDefaultContourPenWithDefaultContourPen(QwtPlotSpectrogram* self, QPen* defaultContourPen) {
	self->setDefaultContourPen(*defaultContourPen);
}

QPen* QwtPlotSpectrogram_defaultContourPen(const QwtPlotSpectrogram* self) {
	return new QPen(self->defaultContourPen());
}

QPen* QwtPlotSpectrogram_contourPen(const QwtPlotSpectrogram* self, double level) {
	return new QPen(self->contourPen(static_cast<double>(level)));
}

void QwtPlotSpectrogram_setConrecFlag(QwtPlotSpectrogram* self, int param1, bool on) {
	self->setConrecFlag(static_cast<QwtRasterData::ConrecFlag>(param1), on);
}

bool QwtPlotSpectrogram_testConrecFlag(const QwtPlotSpectrogram* self, int param1) {
	return self->testConrecFlag(static_cast<QwtRasterData::ConrecFlag>(param1));
}

void QwtPlotSpectrogram_setContourLevels(QwtPlotSpectrogram* self, struct miqt_array /* of double */  contourLevels) {
	QList<double> contourLevels_QList;
	contourLevels_QList.reserve(contourLevels.len);
	double* contourLevels_arr = static_cast<double*>(contourLevels.data);
	for(size_t i = 0; i < contourLevels.len; ++i) {
		contourLevels_QList.push_back(static_cast<double>(contourLevels_arr[i]));
	}
	self->setContourLevels(contourLevels_QList);
}

struct miqt_array /* of double */  QwtPlotSpectrogram_contourLevels(const QwtPlotSpectrogram* self) {
	QList<double> _ret = self->contourLevels();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QwtPlotSpectrogram_rtti(const QwtPlotSpectrogram* self) {
	return self->rtti();
}

void QwtPlotSpectrogram_setDisplayMode2(QwtPlotSpectrogram* self, int param1, bool on) {
	self->setDisplayMode(static_cast<QwtPlotSpectrogram::DisplayMode>(param1), on);
}

void QwtPlotSpectrogram_setDefaultContourPen2(QwtPlotSpectrogram* self, QColor* param1, double width) {
	self->setDefaultContourPen(*param1, static_cast<qreal>(width));
}

void QwtPlotSpectrogram_setDefaultContourPen3(QwtPlotSpectrogram* self, QColor* param1, double width, int param3) {
	self->setDefaultContourPen(*param1, static_cast<qreal>(width), static_cast<Qt::PenStyle>(param3));
}

void QwtPlotSpectrogram_delete(QwtPlotSpectrogram* self) {
	delete self;
}

