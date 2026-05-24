#include <QBrush>
#include <QRectF>
#include <QSizeF>
#include <qwt_plot_seriesitem.h>
#include "gen_qwt_plot_seriesitem.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QwtPlotSeriesItem_virtbase(QwtPlotSeriesItem* src, QwtPlotItem** outptr_QwtPlotItem, QwtAbstractSeriesStore** outptr_QwtAbstractSeriesStore) {
	*outptr_QwtPlotItem = static_cast<QwtPlotItem*>(src);
	*outptr_QwtAbstractSeriesStore = static_cast<QwtAbstractSeriesStore*>(src);
}

void QwtPlotSeriesItem_setOrientation(QwtPlotSeriesItem* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QwtPlotSeriesItem_orientation(const QwtPlotSeriesItem* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

QRectF* QwtPlotSeriesItem_boundingRect(const QwtPlotSeriesItem* self) {
	return new QRectF(self->boundingRect());
}

void QwtPlotSeriesItem_updateScaleDiv(QwtPlotSeriesItem* self, QwtScaleDiv* param1, QwtScaleDiv* param2) {
	self->updateScaleDiv(*param1, *param2);
}

void QwtPlotSeriesItem_delete(QwtPlotSeriesItem* self) {
	delete self;
}

