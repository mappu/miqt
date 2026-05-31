#include <QBrush>
#include <QSizeF>
#include <qwt_plot_abstract_barchart.h>
#include "gen_qwt_plot_abstract_barchart.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QwtPlotAbstractBarChart_virtbase(QwtPlotAbstractBarChart* src, QwtPlotSeriesItem** outptr_QwtPlotSeriesItem) {
	*outptr_QwtPlotSeriesItem = static_cast<QwtPlotSeriesItem*>(src);
}

void QwtPlotAbstractBarChart_setLayoutPolicy(QwtPlotAbstractBarChart* self, int layoutPolicy) {
	self->setLayoutPolicy(static_cast<QwtPlotAbstractBarChart::LayoutPolicy>(layoutPolicy));
}

int QwtPlotAbstractBarChart_layoutPolicy(const QwtPlotAbstractBarChart* self) {
	QwtPlotAbstractBarChart::LayoutPolicy _ret = self->layoutPolicy();
	return static_cast<int>(_ret);
}

void QwtPlotAbstractBarChart_setLayoutHint(QwtPlotAbstractBarChart* self, double layoutHint) {
	self->setLayoutHint(static_cast<double>(layoutHint));
}

double QwtPlotAbstractBarChart_layoutHint(const QwtPlotAbstractBarChart* self) {
	return self->layoutHint();
}

void QwtPlotAbstractBarChart_setSpacing(QwtPlotAbstractBarChart* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

int QwtPlotAbstractBarChart_spacing(const QwtPlotAbstractBarChart* self) {
	return self->spacing();
}

void QwtPlotAbstractBarChart_setMargin(QwtPlotAbstractBarChart* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

int QwtPlotAbstractBarChart_margin(const QwtPlotAbstractBarChart* self) {
	return self->margin();
}

void QwtPlotAbstractBarChart_setBaseline(QwtPlotAbstractBarChart* self, double baseline) {
	self->setBaseline(static_cast<double>(baseline));
}

double QwtPlotAbstractBarChart_baseline(const QwtPlotAbstractBarChart* self) {
	return self->baseline();
}

void QwtPlotAbstractBarChart_delete(QwtPlotAbstractBarChart* self) {
	delete self;
}

