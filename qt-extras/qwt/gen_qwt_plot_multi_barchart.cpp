#include <QBrush>
#include <QList>
#include <QPainter>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVector>
#include <qwt_plot_multi_barchart.h>
#include "gen_qwt_plot_multi_barchart.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotMultiBarChart* QwtPlotMultiBarChart_new() {
	return new (std::nothrow) QwtPlotMultiBarChart();
}

QwtPlotMultiBarChart* QwtPlotMultiBarChart_new2(QwtText* title) {
	return new (std::nothrow) QwtPlotMultiBarChart(*title);
}

QwtPlotMultiBarChart* QwtPlotMultiBarChart_new3(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) QwtPlotMultiBarChart(title_QString);
}

void QwtPlotMultiBarChart_virtbase(QwtPlotMultiBarChart* src, QwtPlotAbstractBarChart** outptr_QwtPlotAbstractBarChart) {
	*outptr_QwtPlotAbstractBarChart = static_cast<QwtPlotAbstractBarChart*>(src);
}

int QwtPlotMultiBarChart_rtti(const QwtPlotMultiBarChart* self) {
	return self->rtti();
}

void QwtPlotMultiBarChart_setBarTitles(QwtPlotMultiBarChart* self, struct miqt_array /* of QwtText* */  barTitles) {
	QList<QwtText> barTitles_QList;
	barTitles_QList.reserve(barTitles.len);
	QwtText** barTitles_arr = static_cast<QwtText**>(barTitles.data);
	for(size_t i = 0; i < barTitles.len; ++i) {
		barTitles_QList.push_back(*(barTitles_arr[i]));
	}
	self->setBarTitles(barTitles_QList);
}

struct miqt_array /* of QwtText* */  QwtPlotMultiBarChart_barTitles(const QwtPlotMultiBarChart* self) {
	QList<QwtText> _ret = self->barTitles();
	// Convert QList<> from C++ memory to manually-managed C memory
	QwtText** _arr = static_cast<QwtText**>(malloc(sizeof(QwtText*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QwtText(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtPlotMultiBarChart_setSamples(QwtPlotMultiBarChart* self, struct miqt_array /* of QwtSetSample* */  samples) {
	QVector<QwtSetSample> samples_QList;
	samples_QList.reserve(samples.len);
	QwtSetSample** samples_arr = static_cast<QwtSetSample**>(samples.data);
	for(size_t i = 0; i < samples.len; ++i) {
		samples_QList.push_back(*(samples_arr[i]));
	}
	self->setSamples(samples_QList);
}

void QwtPlotMultiBarChart_setSamplesWithSamples(QwtPlotMultiBarChart* self, struct miqt_array /* of struct miqt_array  of double   */  samples) {
	QVector<QVector<double>> samples_QList;
	samples_QList.reserve(samples.len);
	struct miqt_array /* of double */ * samples_arr = static_cast<struct miqt_array /* of double */ *>(samples.data);
	for(size_t i = 0; i < samples.len; ++i) {
		QVector<double> samples_arr_i_QList;
		samples_arr_i_QList.reserve(samples_arr[i].len);
		double* samples_arr_i_arr = static_cast<double*>(samples_arr[i].data);
		for(size_t i = 0; i < samples_arr[i].len; ++i) {
			samples_arr_i_QList.push_back(static_cast<double>(samples_arr_i_arr[i]));
		}
		samples_QList.push_back(samples_arr_i_QList);
	}
	self->setSamples(samples_QList);
}

void QwtPlotMultiBarChart_setStyle(QwtPlotMultiBarChart* self, int style) {
	self->setStyle(static_cast<QwtPlotMultiBarChart::ChartStyle>(style));
}

int QwtPlotMultiBarChart_style(const QwtPlotMultiBarChart* self) {
	QwtPlotMultiBarChart::ChartStyle _ret = self->style();
	return static_cast<int>(_ret);
}

void QwtPlotMultiBarChart_setSymbol(QwtPlotMultiBarChart* self, int valueIndex, QwtColumnSymbol* param2) {
	self->setSymbol(static_cast<int>(valueIndex), param2);
}

QwtColumnSymbol* QwtPlotMultiBarChart_symbol(const QwtPlotMultiBarChart* self, int valueIndex) {
	return (QwtColumnSymbol*) self->symbol(static_cast<int>(valueIndex));
}

void QwtPlotMultiBarChart_resetSymbolMap(QwtPlotMultiBarChart* self) {
	self->resetSymbolMap();
}

QRectF* QwtPlotMultiBarChart_boundingRect(const QwtPlotMultiBarChart* self) {
	return new QRectF(self->boundingRect());
}

struct miqt_array /* of QwtLegendData* */  QwtPlotMultiBarChart_legendData(const QwtPlotMultiBarChart* self) {
	QList<QwtLegendData> _ret = self->legendData();
	// Convert QList<> from C++ memory to manually-managed C memory
	QwtLegendData** _arr = static_cast<QwtLegendData**>(malloc(sizeof(QwtLegendData*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QwtLegendData(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QwtGraphic* QwtPlotMultiBarChart_legendIcon(const QwtPlotMultiBarChart* self, int index, QSizeF* param2) {
	return new QwtGraphic(self->legendIcon(static_cast<int>(index), *param2));
}

void QwtPlotMultiBarChart_delete(QwtPlotMultiBarChart* self) {
	delete self;
}

