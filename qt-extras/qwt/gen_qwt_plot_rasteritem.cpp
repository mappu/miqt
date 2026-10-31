#include <QBrush>
#include <QRectF>
#include <QSizeF>
#include <qwt_plot_rasteritem.h>
#include "gen_qwt_plot_rasteritem.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QwtPlotRasterItem_virtbase(QwtPlotRasterItem* src, QwtPlotItem** outptr_QwtPlotItem) {
	*outptr_QwtPlotItem = static_cast<QwtPlotItem*>(src);
}

void QwtPlotRasterItem_setPaintAttribute(QwtPlotRasterItem* self, int param1) {
	self->setPaintAttribute(static_cast<QwtPlotRasterItem::PaintAttribute>(param1));
}

bool QwtPlotRasterItem_testPaintAttribute(const QwtPlotRasterItem* self, int param1) {
	return self->testPaintAttribute(static_cast<QwtPlotRasterItem::PaintAttribute>(param1));
}

void QwtPlotRasterItem_setAlpha(QwtPlotRasterItem* self, int alpha) {
	self->setAlpha(static_cast<int>(alpha));
}

int QwtPlotRasterItem_alpha(const QwtPlotRasterItem* self) {
	return self->alpha();
}

void QwtPlotRasterItem_setCachePolicy(QwtPlotRasterItem* self, int cachePolicy) {
	self->setCachePolicy(static_cast<QwtPlotRasterItem::CachePolicy>(cachePolicy));
}

int QwtPlotRasterItem_cachePolicy(const QwtPlotRasterItem* self) {
	QwtPlotRasterItem::CachePolicy _ret = self->cachePolicy();
	return static_cast<int>(_ret);
}

void QwtPlotRasterItem_invalidateCache(QwtPlotRasterItem* self) {
	self->invalidateCache();
}

struct miqt_qrectf QwtPlotRasterItem_pixelHint(const QwtPlotRasterItem* self, struct miqt_qrectf param1) {
	return miqt_to_cabi<struct miqt_qrectf>(self->pixelHint(miqt_from_cabi<QRectF>(param1)));
}

QwtInterval* QwtPlotRasterItem_interval(const QwtPlotRasterItem* self, int param1) {
	return new QwtInterval(self->interval(static_cast<Qt::Axis>(param1)));
}

struct miqt_qrectf QwtPlotRasterItem_boundingRect(const QwtPlotRasterItem* self) {
	return miqt_to_cabi<struct miqt_qrectf>(self->boundingRect());
}

void QwtPlotRasterItem_setPaintAttribute2(QwtPlotRasterItem* self, int param1, bool on) {
	self->setPaintAttribute(static_cast<QwtPlotRasterItem::PaintAttribute>(param1), on);
}

void QwtPlotRasterItem_delete(QwtPlotRasterItem* self) {
	delete self;
}

